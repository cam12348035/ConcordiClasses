#include "DirectedGraph.h"
#include <iostream>
using namespace std;

int main() {

  cout << "Creating directed graph. \n";
  DirectedGraph graph;
bool cont = true;
while (cont) {
  cout << "\n\nPlease enter an option number:\n" << "1: Add a vertex to the graph\n" << "2: Add a list of vertices\n"
  << "3: Remove a vertex and all connected edges from the graph\n" << "4: Add an edge to the graph\n"
  << "5: Remove an edge from the graph\n" << "6: Search if a vertex exists in the graph\n"
  << "7: Search if an edge exists in the graph\n" << "8: Convert the graph to a string, and output it\n"
  << "9: Clean the whole graph and start again\n" << "10: Continue to Problem 2 with the current graph\n" << "11: Exit program\n" << endl;
  int option;
  cin >> option;

  switch (option) {

    //Create and add a vertex
    case 1:
    {
      Vertex tempv;
      if (graph.addVertex(tempv))
      cout << "A vertex of ID " << tempv.getID() << " has been added." << endl << endl;}
      break;

//Create and add a list of vertices
    case 2:
    {
      cout << "How many vertices would you like to add";
      int temps;
      cin >> temps;
      Vertex tempv[temps];
      if (graph.addVertices(tempv, temps)) {
          cout << "Vertices of ID ";
          for(int i = 0; i<temps; i++) {
            cout << tempv[i].getID() << ", ";
          }
          cout << " have been added\n\n\n";
        }  }
      break;

//Remove a vertex and all connected edges
    case 3:
    {
      cout << "Please enter the ID of the vertex you would like to remove:\n";
      int tempid;
      cin >> tempid;
      if(graph.removeVertex(tempid))
        cout << "The vertex has been removed\n";
      else
        cout << "The vertex does not exist or the program has encountered a problem\n";
      }
      break;

//Add an edge
    case 4:
    {
      int first, second;
      cout << "Please enter the ID of the first vertice:\n";
      cin >> first;
      cout << "Please enter the ID of the second vertice:\n";
      cin >> second;
      Edge tempe(first, second);
      if (graph.addEdge(tempe))
        cout << "The edge has been added\n";
      }
      break;

//Remove an edge
    case 5:
    {
      int first, second;
      cout << "Please enter the ID of the first vertice:\n";
      cin >> first;
      cout << "Please enter the ID of the second vertice:\n";
      cin >> second;
      Edge tempe(first, second);
      if (graph.remove(tempe))
        cout << "The edge has been removed\n";
    }
      break;

//Check if a vertex is in the graph
    case 6:
    {
      cout << "What ID would you like to search?\n";
      int tempi;
      cin >> tempi;
      Vertex tempv(tempi);
      if (graph.searchVertex(tempv))
        cout << "The vertex is in the graph\n";
      else
        cout << "The vertex is not in the graph\n";
    }
      break;

//Check if an edge is in the graph
    case 7:
    {
      int first, second;
      cout << "Please enter the ID of the first vertice you would like to search for:\n";
      cin >> first;
      cout << "Please enter the ID of the second vertice you would like to search for:\n";
      cin >> second;
      Edge tempe(first, second);
      if (graph.searchEdge(tempe))
        cout << "The edge is in the graph\n";
      else
        cout << "The edge is not in the graph\n";
    }
      break;

//Change the graph to string format, then output it
    case 8:
      {
      string temps = graph.toString();
      cout << temps;
      }
      break;

//clear the graph
    case 9:
      if (graph.clean())
        cout << "The graph has been cleared.\n";
      break;

//Exit first part of program, go to problem 2
    case 10:
      cont = false;
      break;

//Exit the program
    case 11:
      return 0;
      break;
  }
}



//Problem 2
cont = true;
while (cont) {
  cout << "Welcome to Problem 2 of the program. We will proceed to testing each operator:\n"
  << "First, we use toString and the << operator:" << endl
  << graph.toString() << endl << endl << "Then we use the > operator to compare two graphs, in this case compare one to itself:\n" ;
  if (graph > graph)
    cout << "The first one is bigger\n";
  else
    cout << "The first one is not bigger\n";
  cout << endl << endl << "Then we combine the + and the = operator to add two copies of our graph to a third:\n";
  DirectedGraph graph2 = graph + graph;
  cout << graph2.toString()
  << endl << endl << "Then we use ++ operator in both cases to increase the weight of each edge\n in this case we use both our graph and the created graph\n\n";
  ++graph;
  graph2++;
  cout << "\n\nThen we test if they are equal with ==\n";
  if (graph == graph2)
    cout << "The graphs are the same\n";
  else
    cout << "The graphs are not the same\n";

cont = false;
}

  return 0;
}
