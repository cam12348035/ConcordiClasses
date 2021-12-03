#include "Vertex.h"
#include "Edge.h"
#include <string>

class Graph {

public:
  Graph();
  virtual ~Graph();
//add in one vertex; bool returns if it is added successfully.
  virtual bool addVertex(Vertex& v)=0;
  virtual bool addVertices(Vertex* vArray) = 0;
//the edges that has connection with this vertex need to be removed;
  virtual bool removeVertex() = 0;
//remove a edge; as a result, some node may remain as orphan.
  virtual bool addEdge(Edge& e) = 0;
// remove the edge
  virtual bool remove(Edge& e)=0;
// return bool if a vertex exists in a graph;
  virtual bool searchVertex(const Vertex& v) = 0;
// return bool if a Edge exists in a graph;
  virtual bool searchEdge(const Edge& e) =0;
// convert the whole graph to a string such as 1-2-4-5; 1-3-5; each path is separated by ';'
// define your own format of a string representation of the graph.
  virtual std::string toString () const = 0;
//remove all the vertices and edges;
  virtual bool clean() = 0;

};
