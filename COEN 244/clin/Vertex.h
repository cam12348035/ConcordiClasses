#include <iostream>

class Vertex {
private:
  static int IDcounter;
  int ID;
  int value;

public:
//Constructors/ destructors
Vertex();
~Vertex();
//Accessing functions
  int getID();

  void setValue(int);
  int getValue();

};
