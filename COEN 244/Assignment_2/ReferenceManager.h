#include <iostream>
#include <vector>
#ifndef REFERENCE_H
#define REFERENCE_H
#include "Reference.h"
#endif

class ReferenceManager {
public:
//constructors/destructors
  ReferenceManager(int);
  ReferenceManager(const ReferenceManager&);
  ~ReferenceManager();

//Other functions
  bool add(Reference*);
  int get(int);
  bool deleteReference(int);
  bool search(int);


//Accessing functions
  int getSize() const;
  Reference getRef(int);
  //All other accessing functions would disrupt code operation

private:
  int capacity;
  vector <Reference>referencelist;
  int size;
};
