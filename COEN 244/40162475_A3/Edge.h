#include <iostream>

class Edge {
private:
  int weight;
  int startV;
  int endV;

public:
//Constructors/ destructors
  Edge(int tempS, int tempE): startV(tempS), endV(tempE) {}

//Accessing functions
  int getWeight() const;

  int getEnd() const;

  int getStart() const;
};
