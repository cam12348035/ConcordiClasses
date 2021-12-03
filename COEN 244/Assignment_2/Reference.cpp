#include "Reference.h"
#include <cstdlib>


Reference::Reference() {id = rand();}

Reference::Reference(const Reference &temp) {id = rand(); author = temp.author; title = temp.title; pubyear = temp.pubyear;}

Reference::~Reference() {}

void Reference::printReference() {
  cout << "\nID: " << id << "\nAuthor: " << author << "\nTitle: " << title << "\nPublication year: " << pubyear;

}

//Accessing functions
int Reference::getId() const {return id;}
void Reference:: setId(int temp) {id = temp;}

string Reference::getTitle() const {return title;}
void Reference::setTitle(string temp) {title = temp;}

string Reference::getAuthor() const {return author;}
void Reference::setAuthor(string temp) {author = temp;}

int Reference::getYear() const {return pubyear;}
void Reference::setYear(int temp) {pubyear = temp;}
