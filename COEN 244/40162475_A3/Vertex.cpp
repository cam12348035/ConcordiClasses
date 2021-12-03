#include "Vertex.h"

int Vertex::IDcounter = 1;

//Constructors/ destructor
Vertex::Vertex(): ID(IDcounter++) {}
Vertex::Vertex(int tempid): ID(tempid) {}
Vertex::~Vertex() {}


//Accessing functions
  int Vertex::getID() const {return ID;}

  void Vertex::setValue(int temp) {value = temp;}
  int Vertex::getValue() const {return value;}
