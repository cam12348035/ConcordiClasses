#include <iostream>
#include "ReferenceManager.h"
#include "TextBook.h"
#include "Article.h"
#ifndef REFERENCE_H
#define REFERENCE_H
#include "Reference.h"
#endif
using namespace std;

int main() {

//Initialize reference manager
  {
  int temp;
  cout << "Would you like to create a reference manager? 1)Yes 2)Exit";
  cin >> temp;
  if (temp == 2)
    return 0;
  }

  cout << "What size would you like your reference manager?";
  int size;
  cin >> size;
  ReferenceManager list(size);



//Begin loop with option testing
  bool cont = true;
  while (cont) {

  cout << "Please enter an option number: " << endl << "1) Add a book to the reference list"
  << endl << "2) Add an article to the reference list" << endl << "3) Add a textbook to the reference list"
  << endl << "4) Print the information on a certain reference";

  int option;
  cin >> option;

//Every testing option:

//General temps to define the different references
string tempstr;
int tempint;
  switch (option) {

  //options for creating references
      case 1:
      {
        Book temp;

        cout << "Please enter the information of this book\n";
        cout << "\nTitle:";
        cin >> tempstr;
        temp.setTitle(tempstr);
        cout << "\nAuthor:";
        cin >> tempstr;
        temp.setAuthor(tempstr);
        cout << "\nYear of publication: ";
        cin >> tempint;
        temp.setYear(tempint);

        cout << "\nPublisher: ";
        cin >> tempstr;
        temp.setPublisher(tempstr);
        cout << "\nNumber of pages: ";
        cin >> tempint;
        temp.setPages(tempint);
        cout <<" yes";
        list.add(&temp);
        cout << "yes2";
        break;}

      case 2:
      {
        Article temp;

        cout << "Please enter the information of this book\n";
        cout << "\nTitle:";
        cin >> tempstr;
        temp.setTitle(tempstr);
        cout << "\nAuthor:";
        cin >> tempstr;
        temp.setAuthor(tempstr);
        cout << "\nYear of publication: ";
        cin >> tempint;
        temp.setYear(tempint);

        cout << "\nStarting page: ";
        cin >> tempint;
        temp.setStart(tempint);
        cout << "\nEnding page: ";
        cin >> tempint;
        temp.setEnd(tempint);
        cout << "\nInformation on the article: ";
        cin >> tempstr;
        temp.setInfo(tempstr);

        list.add(&temp);
        break;}

      case 3:
      {
        TextBook temp;

        cout << "Please enter the information of this book\n";
        cout << "\nTitle:";
        cin >> tempstr;
        temp.setTitle(tempstr);
        cout << "\nAuthor:";
        cin >> tempstr;
        temp.setAuthor(tempstr);
        cout << "\nYear of publication: ";
        cin >> tempint;
        temp.setYear(tempint);

        cout << "\nPublisher: ";
        cin >> tempstr;
        temp.setPublisher(tempstr);
        cout << "\nNumber of pages: ";
        cin >> tempint;
        temp.setPages(tempint);

        cout << "\nURL: ";
        cin >> tempstr;
        temp.setURL(tempstr);

        list.add(&temp);
        break;}

//Print options
      case 4:
      {
        cout << "\nWhat is the number of the reference you would like to print?\n";
        cin >> tempint;
        cout << "yes";
        cout << "yes4";
        cout << "yes3";
        list.getRef(tempint).printReference();
        cout << "yes";
        break;}
  }


//while loop continue question
int contin;
cout << "\n\n Would you like to continue? 1)Yes 2) No";
cin >> contin;
if (contin == 2)
  cont = false;
  }



  return 0;
}
