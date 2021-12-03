#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <array>
using namespace std;

class Student {

public:

  Student();

//setter functions
  void setFName(string fname);
  void setLName(string lname);
  void setId(int id);
  void setBirth(string birth);
  void setGPA(double gpa);
  void setYear(int year);
  void setCredit(int credit);
  void setProgram(string program);

// getter functions
  string getFName();
  string getLName();
  int getId();
  string getBirth();
  double getGPA();
  int getYear();
  int getCredit();
  string getProgram();

// other functions
  bool CompleteProgram(int id);
  string StudentStatus(double gpa);
  void Print_Std_Info(int id);
  int Compare_GPA(Student second);

private:

  string fname;
  string lname;
  int id;
  string birth;
  double gpa;
  int year;
  int credit;
  string program;
};
