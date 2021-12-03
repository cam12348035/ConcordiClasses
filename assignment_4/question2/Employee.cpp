#include "Employee.h"

Employee::Employee() {
  id = 0;
  fname = "Not entered";
  lname = "Not entered";
  birth = "Not entered";
  address = "Not entered";
  yearh = 0;
  salary = 0;
  areac = 0;
  tnumber = "Not entered";
}

//set functions
void Employee::setId(int ival) {
  id = ival;
}

void Employee::setYear(int yval) {
  yearh = yval;
}

//set functions asked in the question
void Employee::setFirst(string fval) {
  fname = fval;
}

void Employee::setLast(string lval) {
  lname = lval;
}


void Employee::setBirth(string bval) {
  birth = bval;
}


void Employee::setSalary(double sval) {
  salary = sval;
}


void Employee::setAddress(string aval) {
  address = aval;
}


void Employee::setPhone(int aval, string tnval) {
  areac = aval;
  tnumber = tnval;
}

//get functions
int Employee::getId() {
  return id;
}

string Employee::getFirst() {
  return fname;
}

string Employee::getLast(){
  return lname;
}

int Employee::getYear() {
  return yearh;
}

string Employee::getName() {
  return fname + lname;
}
string Employee::getBirth() {
  return birth;
}

double Employee::getSalary() {
  return salary;
}

string Employee::getAddress() {
  return address;
}

string Employee::getPhone() {
  return to_string(areac) + tnumber;
}

//compare functions
bool Employee::compareName(Employee b) {
  if (lname == b.lname)
    return true;
  else
    return false;
}

bool Employee::compareBoth(Employee b) {
  if ((salary == b.salary) || (yearh == b.yearh))
    return true;
  else
    return false;
}
