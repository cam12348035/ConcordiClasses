#include "Graph.h"

class DirectedGraph: Public Graph {

private:
  Vertex* vList[200];
  Edge* eList[200];
  static int vcounter;
  static int ecounter;

public:
//Constructors/ deconstructors
  DirectedGraph();
  ~DirectedGraph();

//add in one vertex; bool returns if it is added successfully.
  bool addVertex(Vertex& v);
  bool addVertices(Vertex* vArray);
//the edges that has connection with this vertex need to be removed;
  bool removeVertex();
//remove a edge; as a result, some node may remain as orphan.
  bool addEdge(Edge& e);
// remove the edge
  bool remove(Edge& e);
// return bool if a vertex exists in a graph;
  bool searchVertex(const Vertex& v);
// return bool if a Edge exists in a graph;
  bool searchEdge(const Edge& e);
// convert the whole graph to a string such as 1-2-4-5; 1-3-5; each path is separated by ';'
// define your own format of a string representation of the graph.
  std::string toString () const;
//remove all the vertices and edges;
  bool clean();

};
