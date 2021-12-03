#include "TextBook.h"

//constructors/ destructors
  TextBook::TextBook() {}
  TextBook::TextBook(const TextBook &temp) {URL = temp.URL;}
  TextBook::~TextBook() {}

//other functions
  void TextBook::printReference() {
    std::cout << "\nURL:" << URL;
  }


//Accessing functions
  string TextBook::getURL() const {return URL;}
  void TextBook::setURL(string temp) {URL = temp;}
