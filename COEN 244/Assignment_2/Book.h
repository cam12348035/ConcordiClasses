#ifndef REFERENCE_H
#define REFERENCE_H
#include "Reference.h"
#endif

class Book: public Reference {
public:
//constructors/ destructors
  Book();
  Book(const Book&);
  ~Book();

//Other functions
  int getNumberOfPages();
  virtual void printReference();

//Accessing functions
  string getPublisher() const;
  void setPublisher(string);

  int getPages() const;
  void setPages(int);

private:
  string publisher;
  int pages;

};
