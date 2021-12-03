#include "Vertex.h"

//Constructors/ destructor
Vertex::Vertex(): ID(IDcounter++) {}
Vertex::~Vertex() {}
//initial getValue
int Vertex::IDcounter = 0;

//Accessing functions
  int Vertex::getID() {return ID;}

  void Vertex::setValue(int temp) {value = temp;}
  int Vertex::getValue() {return value;}
