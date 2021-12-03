#include "DirectedGraph.h"
  int DirectedGraph::vcounter = 0;
  int directedGraph::ecounter = 0;

//add in one vertex; bool returns if it is added successfully.
  bool DirectedGraph::addVertex(Vertex& v) {
    vList[vcounter] = v;
    vcounter++;
  }

  bool DirectedGraph::addVertices(Vertex* vArray) {
  }

//the edges that has connection with this vertex need to be removed;
  bool DirectedGraph::removeVertex();

//remove a edge; as a result, some node may remain as orphan.
  bool DirectedGraph::addEdge(Edge& e);

// remove the edge
  bool DirectedGraph::remove(Edge& e);

// return bool if a vertex exists in a graph;
  bool DirectedGraph::searchVertex(const Vertex& v);

// return bool if a Edge exists in a graph;
  bool DirectedGraph::searchEdge(const Edge& e);

// convert the whole graph to a string such as 1-2-4-5; 1-3-5; each path is separated by ';'
// define your own format of a string representation of the graph.
  std::string DirectedGraph::toString () const;

//remove all the vertices and edges;
  bool DirectedGraph::clean();
