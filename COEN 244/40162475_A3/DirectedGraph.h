#include "Graph.h"

class DirectedGraph: public Graph {

private:
  Vertex vList[200];
//Each edge has a starting point, an ending point and a weight, therefore we use a 3 level int array
  int eList[200][3];
  static int vcounter;
  static int ecounter;

public:
//Constructors/ deconstructors
  DirectedGraph();
  ~DirectedGraph();

//add in one vertex; bool returns if it is added successfully.
  bool addVertex(Vertex& v);
  bool addVertices(Vertex* vArray, int size);
//the edges that has connection with this vertex need to be removed;
  bool removeVertex(int);
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


//Problem 2
  bool operator == (DirectedGraph);
  DirectedGraph operator = (DirectedGraph);
  DirectedGraph& operator ++ ();
  DirectedGraph operator ++ (int);
  DirectedGraph operator + (const DirectedGraph);
  bool operator > (const DirectedGraph);
  friend std::ostream& operator<<(std::ostream&, const DirectedGraph);

};
