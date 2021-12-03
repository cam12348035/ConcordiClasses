#include <iostream>
#include <array>
#include "Node.h"
using namespace std;

class NodeList{
 private:
   static const size_t LIST_SIZE = 500;
   Node *items;
   size_t numItems;
 public:
   NodeList();
   NodeList(const NodeList&);
   ~NodeList();
   void printNodes();
   void searchNodes();

   void addNode(Node);
};
