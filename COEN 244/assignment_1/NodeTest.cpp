#include "Nodelist.h"
#include <vector>
using namespace std;

int main() {
  cout << "Would you like to create a NodeList? \n1) Yes 2) Exit";
  int option;
  cin >> option;
  if (option == 2)
    return 0;

  NodeList list;
  bool yes = true;
  while (yes) {
    cout << "Please select an option:" << endl << "1) Create a node and add it to the list"
    << endl << "2) Print out all the values and Ids of the nodes"
    << endl << "3) Search if a Node exists within the list" << endl << "4) Exit" << endl;
    int opt;
    cin >> opt;

    switch (opt) {
      case 1:
        {
        Node tempnode;
        int tempval;
        cout << "What value would you like to set for the node? (Only integers)";
        cin >> tempval;
        tempnode.setVal(tempval);
        list.addNode(tempnode);
        cout << "1";
        }
        break;
      case 2:
        list.printNodes();
        break;
      case 3:
        list.searchNodes();
        break;
      case 4:
        yes = false;
        break;
      default:
        cout << "You did not enter an option, please try again.";
    }


  }

}
