#include "Article.h"
using namespace std;

//constructors/ destructors
  Article::Article() {}
  Article::Article(const Article &temp) {info = temp.info; startpage = temp.startpage; endpage = temp.endpage;}
  Article::~Article() {}

//Other functions
  int Article::getNumberOfPages() {
    return endpage-startpage;
  }

  void Article::printReference() {
    cout << "\nInfo: " << info << "\nStarting page: " << startpage << "\nEnding page: " << endpage;
  }
//Accessing functions
  string Article::getInfo() const { return info;}
  void Article::setInfo(string temp) {info = temp;}

  int Article::getStart() const {return startpage;}
  void Article::setStart(int temp) {startpage = temp;}

  int Article::getEnd() const {return endpage;}
  void Article::setEnd(int temp) {endpage = temp;}
