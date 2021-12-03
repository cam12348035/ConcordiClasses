#include "RealGraph.h"
#include <iostream>
using namespace std;

//Graph, directed or undirected that creates a graph connecting people by their friendship


int main() {
  bool cont = true;
  int type;
  while (cont) {
    cout << "Would you like a 1) Directed or 2) Undirected Friend graph?";
    cin >> type;
    if(type != 1 && type != 2)
      cout << "Please try again\n";
    else
      cont = false;
  }

  RealGraph graph(type-1);

  cont = true;
  while(cont) {

    cout << "\n\nPlease enter an option number:\n" << "1: Add a person to the graph\n"
    << "2: Remove a person and all connected friendships from the graph\n" << "3: Add a friendship to the graph\n"
    << "4: Remove a friendship from the graph\n" << "5: Check if a friendship exists in the graph\n"
    << "6: Check if an person exists by inputing their number\n" << "7: Output the graph with the relation format\n"
    << "8: Output if an friendship connects to selected vertex\n" << "9: Output all friendship relations connected to a selected person\n"
    << "10: Exit the program\n\n";
    int opt;
    cin >> opt;

  switch(opt) {

//Create and add a vertex
      case 1:
      {
        Vertex tempv;
        if (graph.addVertex(tempv))
        cout << "A person of number " << tempv.getID() << " has been added." << endl << endl;}
        break;

//Remove a vertex and all connected edges
      case 2:
      {
        cout << "Please enter the ID of the person you would like to remove:\n";
        int tempid;
        cin >> tempid;
        if(graph.removeVertex(tempid))
          cout << "The person has been removed\n";
        else
          cout << "The person does not exist or the program has encountered a problem\n";
        }
        break;

//Add an edge
      case 3:
      {
        int first, second;
        cout << "Please enter the ID of the first person:\n";
        cin >> first;
        cout << "Please enter the ID of the second person:\n";
        cin >> second;
        Edge tempe(first, second);
        if (graph.addEdge(tempe))
          cout << "The friendship has been added\n";
        }
        break;

//Remove an edge
      case 4:
      {
        int first, second;
        cout << "Please enter the ID of the first person:\n";
        cin >> first;
        cout << "Please enter the ID of the second person:\n";
        cin >> second;
        Edge tempe(first, second);
        if (graph.remove(tempe))
          cout << "The friendship has been removed\n";
      }
        break;

//check if an edge is in the graph
      case 5:
      {
        int first, second;
        cout << "Please enter the ID of the first person you would like to search for:\n";
        cin >> first;
        cout << "Please enter the ID of the second person you would like to search for:\n";
        cin >> second;
        Edge tempe(first, second);
        if (graph.searchEdge(tempe))
          cout << "The friendship is in the graph\n";
        else
          cout << "The friendship is not in the graph\n";
      }
        break;

//Search for a vertex by value
      case 6:
      {
        int value;
        cout << "What is the ID you would like to search?";
        cin >> value;
        if (graph.searchValue(value))
          cout << "The person is in the graph\n";
        else
          cout << "The person is not in the graph\n";
      }
      break;

//Change the graph to string format, then output it
      case 7:
        {
        string temps = graph.toString();
        cout << temps;
        }
        break;

//Output if an edge connects to selected vertex
      case 8:
        {
        int temp1, temp2;
        cout << "What is the ID of the first person?";
        cin >> temp1;
        cout << "What is the ID of the second person?";
        cin >> temp2;
        Vertex vtemp1(temp1);
        Vertex vtemp2(temp2);
        cout << graph.toStringConnecting(temp1, temp2);
        }
        break;

      case 9:
        {
        int temp1;
        cout << "What is the ID of the person?";
        cin >> temp1;
        Vertex vtemp(temp1);
        cout << graph.toStringEdges(vtemp);
        }
        break;

      case 10:
        cont = false;

  }
  }
}
