#include <iostream>
#include <cstdlib>
using namespace std;

class Node {

private:
  int id;
  int value;

public:
  Node();
  void setId(int);
  int getId();

  void setVal(int);
  int getVal();

  int cloneNode();

};
