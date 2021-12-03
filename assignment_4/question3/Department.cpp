#include "Department.h"

Department::Department() {
  idnum = "Not defined";
  name = "Not defined";
  hist = "Not defined";
  count = 0;
}

string Department::getDId() {
  return idnum;
}

string Department::getDName() {
  return name;
}

string Department::getDHist() {
  return hist;
}

void Department::printList() {
  Employee val;
  for (int i = 0; i < count; i++) {
    val = list[i];
    cout << "ID number: " << val.getId() << "\nYear hired: " << val.getYear()
    << "\nFull name: " << val.getName() << "\nBirth date: " << val.getBirth()
    << "\nSalary: " << val.getSalary() << "\nAddress: " << val.getAddress()
    << "\nTelephone number: " << val.getPhone();
  }
}

void Department::printNum() {
  cout << "Number of employees in this department: " << count;
}

void Department::setDName(string nval) {
  name = nval;
}

void Department::setDHist(string hval) {
  hist = hval;
}

void Department::setDId(string ival) {
  idnum = ival;
}

void Department::addEmploy(Employee temp) {
  if (count <= 25) {
    list[count] = temp;
    count++;
  } else
    cout << "Too many employees.";
}

void Department::removeEmploy() {
  count--;
}

bool Department::findEmploy(int id) {
  for (int i = 0; i < count; i++) {
    if (list[i].getId() == id)
      return true;
  }
  return false;
}
