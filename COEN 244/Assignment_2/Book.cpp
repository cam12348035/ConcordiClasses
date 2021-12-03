#include "Book.h"

//constructors/ destructors
  Book::Book() {}
  Book::Book(const Book &temp) {publisher = temp.publisher; pages = temp.pages;}
  Book::~Book() {}

//Other functions
  int Book::getNumberOfPages() {
    return pages;
  }


//Accessing functions
  string Book::getPublisher() const {return publisher;}
  void Book::setPublisher(string temp) {publisher = temp;}

  int Book::getPages() const {return pages;}
  void Book::setPages(int temp) {pages = temp;}
