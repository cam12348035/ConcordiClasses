#include "RealGraph.h"
#include <string>
  int RealGraph::vcounter = 0;
  int RealGraph::ecounter = 0;

//Constructors/ destructors
  RealGraph::RealGraph() {}
  RealGraph::~RealGraph() {}


//add in one vertex
  bool RealGraph::addVertex(Vertex& v) {
    for (int i = 0; i < vcounter; i++) {
      if (vList[i].getID() == v.getID())
        return false;
    }
    vList[vcounter] = v;
    vcounter++;

    return true;
  }


//add array of vertex
  bool RealGraph::addVertices(Vertex* vArray, int size) {
    for(size_t i = 0; i < size; i++) {
      vList[vcounter] = vArray[i];
      vcounter++;
    }

    return true;
  }



//the edges that has connection with this vertex need to be removed;
  bool RealGraph::removeVertex(int tempID) {

//check if vertex is in graph
for (int i = 0; i < vcounter; i++) {
  if (vList[i].getID() == tempID)
    break;
  else if (i == vcounter - 1)
    return false;
}
//delete all edges connected to the vertex
    for(size_t i = 0; i < ecounter; i++) {

//if edge exists, replace it with empty edge
        if(eList[i].getStart() == tempID || eList[i].getEnd() == tempID) {
          eList[i].setStart(0);
          eList[i].setEnd(0);
      }
    }
//find vertex then move all following vertices by 1
int templocation;
  for (int i = 0; i < vcounter; i++) {
    if (vList[i].getID() == tempID) {
      templocation = i;
    }
  }
  for (int i = templocation; i < vcounter; i++) {
    vList[i] = vList[i+1];
  }
  vcounter = vcounter - 1;
return true;
}



//remove a edge; as a result, some node may remain as orphan.
  bool RealGraph::addEdge(Edge& e) {
//check if both start and end are in the graph
    for (int i = 0; i < vcounter; i++) {
      if(e.getStart() == vList[i].getID())
        break;
      else if (i == vcounter-1)
        return false;
    }
    for (int i = 0; i < vcounter; i++) {
      if(e.getEnd() == vList[i].getID())
        break;
      else if (i == vcounter-1)
        return false;
    }

    eList[ecounter] = e;
    ecounter++;
    return true;
  }

// remove the edge
//find the edge in the array, then replace its values with empty
  bool RealGraph::remove(Edge& e) {
    for (int i = 0; i < ecounter; i++) {
      if (eList[i].getStart() == e.getStart() && eList[i].getEnd() == e.getEnd()){
        eList[i].setStart(0);
        eList[i].setEnd(0);
      }
    }
    return true;
  }


// return true if a vertex exists in a graph;
  bool RealGraph::searchVertex(const Vertex& v) {
    for (int i = 0; i < vcounter; i++) {
      if (vList[i].getID() == v.getID())
        return true;
      else if (i == vcounter - 1)
        return false;

  }
  return false;
}

// return bool if a Edge exists in a graph;
  bool RealGraph::searchEdge(const Edge& e) {
    for (int i = 0; i < ecounter; i++) {
      if (eList[i].getStart() == e.getStart() && eList[i].getEnd() == e.getEnd())
        return true;
      else if (i == ecounter - 1)
        return false;
    }
    return false;
  }

//return true if a the value entered exists in one of its Vertex
  bool RealGraph::searchValue(int tempv) {
    for (int i = 0; i < vcounter; i++) {
      if (vList[i].getValue() == tempv)
        return true;
    }
    return false;
  }

// converting whole graph to string
  std::string RealGraph::toString () const {
    std::string temp;
    for (int i = 0; i < ecounter; i++) {
      if (eList[i].getStart() != 0 || eList[i].getEnd() != 0) {
        std::string start = std::to_string(eList[i].getStart());
        std::string end = std::to_string(eList[i].getEnd());
        if (type == 0)
          temp = temp + start + "->" + end + "; ";
        else if (type == 1)
          temp = temp + start + "-" + end + "; ";
        else
          temp = temp + "Error; ";
      }
    }
    return temp;
  }

//convert edge connecting two vertices to string
std::string RealGraph::toStringConnecting(Vertex vtemp1, Vertex vtemp2) const {
  std::string temp;
  for (int i = 0; i < ecounter; i++) {
    std::string stemp1 = std::to_string(vtemp1.getID());
    std::string stemp2 = std::to_string(vtemp2.getID());
//check if there is a direct edge
    if (vtemp1.getID() == eList[i].getStart() && vtemp2.getID() == eList[i].getEnd()) {
      if (type == 0)
        temp = temp + stemp1 + "->" + stemp2 + "; ";
      else
        temp = temp + stemp1 + "-" + stemp2 + "; ";
      return temp;
    }
    if (vtemp2.getID() == eList[i].getStart() && vtemp1.getID() == eList[i].getEnd()) {
      if (type == 0)
        temp = temp + stemp2 + "->" + stemp1 + "; ";
      else
        temp = temp + stemp2 + "-" + stemp1 + "; ";
      return temp;
    }
  }

    std::cout << "There is no edge connecting the two vertices";
  return temp;
}

//convert all edges connected to a vertice to to string
  std::string RealGraph::toStringEdges(Vertex vtemp) const {
    std::string temp;
    std::string stemp = std::to_string(vtemp.getID());
    for (int i = 0; i < ecounter; i++) {
      if (vtemp.getID() == eList[i].getStart()){
        std::string endtemp = std::to_string(eList[i].getEnd());
        if (type == 0)
          temp = temp + stemp + "->" + endtemp + "; ";
        else
          temp = temp + stemp + "-" + endtemp + "; ";
      }
      if (vtemp.getID() == eList[i].getEnd()) {
        std::string starttemp = std::to_string(eList[i].getStart());
        if (type == 0)
          temp = temp + starttemp + "->" + stemp + "; ";
        else
          temp = temp + starttemp + "-" + stemp + "; ";
      }

    }
  return temp;
  }


//remove all the vertices and edges;
  bool RealGraph::clean() {
    vcounter = 0;
    ecounter = 0;
    return true;
  }



//Problem 2

//Find if both graphs have the same array size, then compare each list
  bool RealGraph::operator == (RealGraph tempg) {
    if (vcounter != tempg.vcounter || ecounter != tempg.vcounter)
      return false;

    for (int i = 0; i < vcounter; i++) {
      if (vList[i].getID() != tempg.vList[i].getID())
        return false;
      if (vList[i].getValue() != tempg.vList[i].getValue())
        return false;
    }
    for (int i = 0; i < ecounter; i++) {
      if (eList[i].getStart() != tempg.eList[i].getStart() || eList[i].getEnd() != tempg.eList[i].getEnd())
        return false;
    }
//If it continues, all checks are true
    return true;
  }

//Copy each attribute to the first graph
  RealGraph RealGraph::operator = (const RealGraph tempg) {
    RealGraph tempg2;
    for (int i = 0; i< tempg.vcounter; i++){
      tempg2.vList[i] = tempg.vList[i];
    }
    for (int i = 0; i < tempg.ecounter; i++) {
      tempg2.eList[i].setStart(tempg.eList[i].getStart());
      tempg2.eList[i].setEnd(tempg.eList[i].getEnd());
      tempg2.eList[i].setWeight(tempg.eList[i].getWeight());
    }
    tempg2.ecounter = tempg.ecounter;
    tempg2.vcounter = tempg.vcounter;
    return tempg2;
  }

//Defined as the same operators, adding 1 to the weight of every edge
  RealGraph& RealGraph::operator ++ () {
    for (int i = 0; i < ecounter; i++)
      eList[i].setWeight(eList[i].getWeight() + 1);
    return *this;
  }
  RealGraph RealGraph::operator ++ (int ignored) {
    RealGraph temp = *this;
    ++(*this);
    return temp;
  }

//Create a temp graph, add the value of one graph then the other, then return the temp graph
  RealGraph RealGraph::operator + (RealGraph tempg) {
    RealGraph tempg2;
    for (int i = 0; i< tempg.vcounter; i++){
      tempg2.vList[i] = tempg.vList[i];
    }
    for (int i = tempg.vcounter; i < tempg.vcounter + vcounter; i++){
      tempg2.vList[i] = vList[i];
    }

    for (int i = 0; i < tempg.ecounter; i++) {
      tempg2.eList[i].setStart(tempg.eList[i].getStart());
      tempg2.eList[i].setEnd(tempg.eList[i].getEnd());
      tempg2.eList[i].setWeight(tempg.eList[i].getEnd());
    }
    for (int i = tempg.ecounter; i < tempg.ecounter + ecounter; i++) {
      tempg2.eList[i].setStart(eList[i].getStart());
      tempg2.eList[i].setEnd(eList[i].getEnd());
      tempg2.eList[i].setWeight(eList[i].getWeight());
    }

    tempg2.ecounter = tempg.ecounter + ecounter;
    tempg2.vcounter = tempg.vcounter + vcounter;
    return tempg2;
  }

  bool RealGraph::operator > (const RealGraph temp) {
    int weight1, weight2;
    for (int i = 0; i < ecounter; i++)
      weight1 = weight1 + eList[i].getWeight();
    for (int i = 0; i < temp.ecounter; i++)
      weight2 = weight2 + temp.eList[i].getWeight();
    if (weight1 > weight2)
      return true;
    else
      return false;
  }

  std::ostream& operator<<(std::ostream& out, const RealGraph& tempg) {
    out << tempg.toString();
    return out;
  }
