#include "Book.h"

class TextBook : public Book {
public:
//constructors/ destructors
  TextBook();
  TextBook(const TextBook&s);
  ~TextBook();

//other functions
  void printReference();

//Accessing functions
  string getURL() const;
  void setURL(string);

private:
  string URL;
};
