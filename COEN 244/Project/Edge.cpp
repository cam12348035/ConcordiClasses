#include "Edge.h"

//Accessing functions
int Edge::getWeight() const {return weight;}
int Edge::getStart() const {return startV;}
int Edge::getEnd() const {return endV;}
void Edge::setWeight(int temp) {weight = temp;}
void Edge::setStart(int temp) {startV = temp;}
void Edge::setEnd(int temp) {endV = temp;}
