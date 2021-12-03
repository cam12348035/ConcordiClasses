#include "DirectedGraph.h"
#include <string>
  int DirectedGraph::vcounter = 0;
  int DirectedGraph::ecounter = 0;

//Constructors/ destructors
  DirectedGraph::DirectedGraph() {}
  DirectedGraph::~DirectedGraph() {}


//add in one vertex
  bool DirectedGraph::addVertex(Vertex& v) {
    vList[vcounter] = v;
    vcounter++;

    return true;
  }


//add array of vertex
  bool DirectedGraph::addVertices(Vertex* vArray, int size) {
    for(size_t i = 0; i < size; i++) {
      vList[vcounter] = vArray[i];
      vcounter++;
    }

    return true;
  }



//the edges that has connection with this vertex need to be removed;
  bool DirectedGraph::removeVertex(int tempID) {

//check if vertex is in graph
for (int i = 0; i < vcounter; i++) {
  if (vList[i].getID() == tempID)
    break;
  else if (i == vcounter - 1)
    return false;
}
//delete all edges connected to the vertex
    for(size_t i = 0; i < ecounter; i++) {
      for(int j = 0; j < 2; j++) {

//if edge exists, replace it with empty edge
        if(eList[i][j] == tempID) {
          eList[i][j] = 0;
          if (j == 0)
            eList[i][j+1] = 0;
            else
            eList[i][j-1] = 0;
        }
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
  bool DirectedGraph::addEdge(Edge& e) {
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

    eList[ecounter][0] = e.getStart();
    eList[ecounter][1] = e.getEnd();
    ecounter++;
    return true;
  }

// remove the edge
//find the edge in the array, then replace its values with empty
  bool DirectedGraph::remove(Edge& e) {
    for (int i = 0; i < ecounter; i++) {
      if (eList[i][0] == e.getStart() && eList[i][1] == e.getEnd()){
        eList [i][0] = 0;
        eList [i][1] = 0;
      }
    }
    return true;
  }

// return true if a vertex exists in a graph;
  bool DirectedGraph::searchVertex(const Vertex& v) {
    for (int i = 0; i < vcounter; i++) {
      if (vList[i].getID() == v.getID())
        return true;
      else if (i == vcounter - 1)
        return false;

  }
  return false;
}

// return bool if a Edge exists in a graph;
  bool DirectedGraph::searchEdge(const Edge& e) {
    for (int i = 0; i < ecounter; i++) {
      if (eList[i][0] == e.getStart() && eList[i][1] == e.getEnd())
        return true;
      else if (i == ecounter - 1)
        return false;
    }
    return false;
  }

// converting whole graph to format 1->2;2->3;3->2; etc
// transform each start and end to int, then concatenate with format
  std::string DirectedGraph::toString () const {
    std::string temp;
    for (int i = 0; i < ecounter; i++) {
      if (eList[i][0] != 0) {
        std::string start = std::to_string(eList[i][0]);
        std::string end = std::to_string(eList[i][1]);
        temp = temp + start + "->" + end + "; ";
      }
    }
    return temp;
  }

//remove all the vertices and edges;
  bool DirectedGraph::clean() {
    vcounter = 0;
    ecounter = 0;
    return true;
  }



//Problem 2

//Find if both graphs have the same array size, then compare each list
  bool DirectedGraph::operator == (DirectedGraph tempg) {
    if (vcounter != tempg.vcounter || ecounter != tempg.vcounter)
      return false;

    for (int i = 0; i < vcounter; i++) {
      if (vList[i].getID() != tempg.vList[i].getID())
        return false;
      if (vList[i].getValue() != tempg.vList[i].getValue())
        return false;
    }
    for (int i = 0; i < ecounter; i++) {
      if (eList[i][0] != tempg.eList[i][0] || eList[i][1] != tempg.eList[i][1])
        return false;
    }
//If it continues, all checks are true
    return true;
  }

//Copy each attribute to the first graph
  DirectedGraph DirectedGraph::operator = (const DirectedGraph tempg) {
    DirectedGraph tempg2;
    for (int i = 0; i< tempg.vcounter; i++){
      tempg2.vList[i] = tempg.vList[i];
    }
    for (int i = 0; i < tempg.ecounter; i++) {
      tempg2.eList[i][0] = tempg.eList[i][0];
      tempg2.eList[i][1] = tempg.eList[i][1];
      tempg2.eList[i][2] = tempg.eList[i][2];
    }
    tempg2.ecounter = tempg.ecounter;
    tempg2.vcounter = tempg.vcounter;
    return tempg2;
  }

//Defined as the same operators, adding 1 to the weight of every edge
  DirectedGraph& DirectedGraph::operator ++ () {
    for (int i = 0; i < ecounter; i++)
      eList[i][2] = eList[i][2] + 1;
    return *this;
  }
  DirectedGraph DirectedGraph::operator ++ (int ignored) {
    DirectedGraph temp = *this;
    ++(*this);
    return temp;
  }

//Create a temp graph, add the value of one graph then the other, then return the temp graph
  DirectedGraph DirectedGraph::operator + (DirectedGraph tempg) {
    DirectedGraph tempg2;
    for (int i = 0; i< tempg.vcounter; i++){
      tempg2.vList[i] = tempg.vList[i];
    }
    for (int i = tempg.vcounter; i < tempg.vcounter + vcounter; i++){
      tempg2.vList[i] = vList[i];
    }

    for (int i = 0; i < tempg.ecounter; i++) {
      tempg2.eList[i][0] = tempg.eList[i][0];
      tempg2.eList[i][1] = tempg.eList[i][1];
      tempg2.eList[i][2] = tempg.eList[i][2];
    }
    for (int i = tempg.ecounter; i < tempg.ecounter + ecounter; i++) {
      tempg2.eList[i][0] = eList[i][0];
      tempg2.eList[i][1] = eList[i][1];
      tempg2.eList[i][2] = eList[i][2];
    }

    tempg2.ecounter = tempg.ecounter + ecounter;
    tempg2.vcounter = tempg.vcounter + vcounter;
    return tempg2;
  }

  bool DirectedGraph::operator > (const DirectedGraph temp) {
    int weight1, weight2;
    for (int i = 0; i < ecounter; i++)
      weight1 = weight1 + eList[i][2];
    for (int i = 0; i < temp.ecounter; i++)
      weight2 = weight2 + temp.eList[i][2];
    if (weight1 > weight2)
      return true;
    else
      return false;
  }

  std::ostream& operator<<(std::ostream& out, const DirectedGraph& tempg) {
    out << tempg.toString();
    return out;
  }
