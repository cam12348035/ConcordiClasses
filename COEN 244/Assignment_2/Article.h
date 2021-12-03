#ifndef REFERENCE_H
#define REFERENCE_H
#include "Reference.h"
#endif

class Article: public Reference {

public:
//constructors/ destructors
  Article();
  Article(const Article &);
  ~Article();

//Other functions
  int getNumberOfPages();
  void printReference();

//Accessing functions
  string getInfo() const;
  void setInfo(string);

  int getStart() const;
  void setStart(int);

  int getEnd() const;
  void setEnd(int);

private:
  string info;
  int startpage;
  int endpage;

};
