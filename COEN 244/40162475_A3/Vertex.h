#include <iostream>

class Vertex {
private:
  static int IDcounter;
  int ID;
  int value;

public:
//Constructors/ destructors
Vertex();
Vertex(int);
~Vertex();
//Accessing functions
  int getID() const;

  void setValue(int);
  int getValue() const;

};
