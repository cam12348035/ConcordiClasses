#include "Graph.h"

class RealGraph: public Graph {

private:
  Vertex vList[200];
  Edge eList[200];
//Type: 0 for Directed, 1 for Undirected
  int type;
  static int vcounter;
  static int ecounter;

public:
//Constructors/ deconstructors
  RealGraph();
  RealGraph(int temptype): type(temptype) {};
  ~RealGraph();

//add in one vertex; bool returns if it is added successfully.
  bool addVertex(Vertex& v);
  bool addVertices(Vertex* vArray, int size);
//the edges that has connection with this vertex need to be removed;
  bool removeVertex(int);
//remove a edge; as a result, some node may remain as orphan.
  bool addEdge(Edge& e);
// remove the edge
  bool remove(Edge& e);
// return true if a vertex exists in a graph;
  bool searchVertex(const Vertex& v);
// return true if a Edge exists in a graph;
  bool searchEdge(const Edge& e);
//return true if a the value entered exists in one of its Vertex
  bool searchValue(int);
// convert the whole graph to a string; 1-2; 2-3; for Undirected, 1->2 for Directed
  std::string toString () const;
//convert edge connecting two vertices to string
  std::string toStringConnecting(Vertex vtemp1, Vertex vtemp2) const;
//convert all edges connected to a vertice to to string
  std::string toStringEdges(Vertex vtemp) const;
//remove all the vertices and edges;
  bool clean();

  bool operator == (RealGraph);
  RealGraph operator = (RealGraph);
  RealGraph& operator ++ ();
  RealGraph operator ++ (int);
  RealGraph operator + (const RealGraph);
  bool operator > (const RealGraph);
  friend std::ostream& operator<<(std::ostream&, const RealGraph);

};
