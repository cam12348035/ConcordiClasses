#include <iostream>
#include "Employee.h"
#include <array>
using namespace std;

class Department {

  public :

      Department();
  //get functions
    string getDId();
    string getDName();
    string getDHist();
    void printList();
    void printNum();

//set functions
    void setDName(string);
    void setDHist(string);
    void setDId(string);

//other
    void addEmploy(Employee);
    void removeEmploy();
    bool findEmploy(int);


  private :
    string idnum;
    string name;
    string hist;
    array<Employee, 26>list;
    int count;
};
