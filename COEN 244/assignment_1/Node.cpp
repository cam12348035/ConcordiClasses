#include "Node.h"

Node::Node() {
  id = rand();
}

void Node::setId(int temp) {
  id = temp;
}

int Node::getId() {
  return id;
}

void Node::setVal(int temp) {
  value = temp;
}

int Node::getVal() {
  return value;
}

int Node::cloneNode() {
  return value;
}
