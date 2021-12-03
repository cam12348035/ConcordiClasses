#include <iostream>
#include <string>
using namespace std;

class Employee {

public :

  Employee();
  //set functions
  void setId(int id);
  void setYear(int yearh);


  //set functions asked in the question
  void setFirst(string fname);
  void setLast(string lname);
  void setBirth(string birth);
  void setSalary(double salary);
  void setAddress(string address);
  void setPhone(int areac, string tnumber);

  //get functions
  int getId();
  string getFirst();
  string getLast();
  int getYear();
  string getName();
  string getBirth();
  double getSalary();
  string getAddress();
  string getPhone();

  //compare functions
  bool compareName(Employee);
  bool compareBoth(Employee);


private :
  int id;
  string fname;
  string lname;
  string birth;
  string address;
  int yearh;
  double salary;
  int areac;
  string tnumber;

};
