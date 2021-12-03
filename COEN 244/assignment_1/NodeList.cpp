#include "NodeList.h"

NodeList::NodeList() {
  numItems=0;
  items = new Node;
}

NodeList::NodeList(const NodeList &temp) {
    items = temp.items;
    numItems = temp.numItems;
}
NodeList::~NodeList() {}

void NodeList::printNodes() {
  if (numItems==0) {
    cout << "There are no nodes;";
  } else {
  for (int i=0; i<numItems; i++)  {
    cout << "ID: " << items[i].getId() << endl << "Value: " << items[i].getVal() << endl << endl;
  }
}
}

void NodeList::addNode(Node temp) {
  items[numItems] = temp;
  numItems = numItems+1;
}

void NodeList::searchNodes() {
  cout << "Would you like to search by value or by id? \n1) Value 2) Id\n";
  int temp;
  cin >> temp;
  if (temp == 1) {
    cout << "Please enter the value you are searching for\n";
    int search;
    cin >> search;
    for (int i=0; i<numItems; i++) {
      if (items[i].getVal() == search){
        cout << "Your node is in the list.\n\n";
        break;
      } else if (i==numItems-1)
        cout << "Your node is not in the list.\n\n";
    }
  } else if (temp == 2) {
    cout << "Please enter the Id you are searching for\n";
    int search;
    cin >> search;
    for (int i=0; i<numItems; i++) {
      if (items[i].getId() == search){
        cout << "Your node is in the list.\n\n";
        break;
      } else if (i==numItems-1)
        cout << "Your node is not in the list.\n\n";
    }
  }
}
