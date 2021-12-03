#include <iostream>

class Edge {
private:
  int weight;
  int startV;
  int endV;

public:
//Constructors/ destructors
  Edge(int tempw, int tempS, int tempE): weight(tempw), startV(tempS), endV(tempE) {}

//Accessing functions
  int getWeight();

  int getEnd();

  int getStart();
};
