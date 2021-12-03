#include <iostream>
#include "Client.h"

class Subject {
private:
  Client *clientptr;
public:
  virtual void dolt();
};
