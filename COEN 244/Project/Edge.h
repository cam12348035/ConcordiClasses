#include <iostream>

class Edge {
private:
  int weight;
  int startV;
  int endV;

public:
//Constructors/ destructors
  Edge() : startV(0), endV(0) {}
  Edge(int tempS, int tempE): startV(tempS), endV(tempE) {}
  ~Edge() {}

//Accessing functions
  int getWeight() const;
  void setWeight(int);

  int getEnd() const;
  void setEnd(int);

  int getStart() const;
  void setStart(int);
};
