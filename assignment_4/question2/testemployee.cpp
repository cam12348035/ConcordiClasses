#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

int main() {

//setting values

    Employee e1;
    Employee e2;
    int ival, yval, arval;
    string fval, lval, bval, aval, tnval;
    double sval;

  //setting value of first employee
    cout << "Please enter the information for the first employee:" << endl;

    cout << "ID number: ";
    cin >> ival;
    e1.setId(ival);

    cout << "Year hired: ";
    cin >> yval;
    e1.setYear(yval);

    cout << "First name: ";
    cin >> fval;
    e1.setFirst(fval);

    cout << "Last Name: ";
    cin >> lval;
    e1.setLast(lval);

    cout << "Birth date (DD/MM/YYYY): ";
    cin >> bval;
    e1.setBirth(bval);

    cout << "Salary: ";
    cin >> sval;
    e1.setSalary(sval);

    cout << "Full address (Enter n when done):";
    string aval2;
    while (aval2 != "n") {
      cin >> aval2;
      aval = aval + " " + aval2;
    }
    e1.setAddress(aval);

    cout << "Phone number (Put a space only between the area code and the number): ";
    cin >> arval;
    cin >> tnval;
    e1.setPhone(arval, tnval);

  //setting value of second employee
    cout << endl << "Please enter the information for the second employee:" << endl;

    cout << "ID number: ";
    cin >> ival;
    e2.setId(ival);

    cout << "Year hired: ";
    cin >> yval;
    e2.setYear(yval);

    cout << "First name: ";
    cin >> fval;
    e2.setFirst(fval);

    cout << "Last Name: ";
    cin >> lval;
    e2.setLast(lval);

    cout << "Birth date (DD/MM/YYYY): ";
    cin >> bval;
    e2.setBirth(bval);

    cout << "Salary: ";
    cin >> sval;
    e2.setSalary(sval);

    cout << "Full address (Enter n when done):";
    aval2 = "Undefined";
    while (aval2 != "n") {
      cin >> aval2;
      aval = aval + " " + aval2;
    }
    e2.setAddress(aval);

    cout << "Phone number (Put a space only between the area code and the number): ";
    cin >> arval;
    cin >> tnval;
    e2.setPhone(arval, tnval);

//testing functions
bool cont = true;
while (cont) {
  cout << endl << "Please enter a number from 1 to 11." << endl <<
  "1) Show an employee's ID" << endl << "2) Show an employee's first name" << endl <<
  "3) Show an employee's last name" << endl << "4) Show the year an employee was hired" << endl <<
  "5) Show an employee's full name" << endl << "6) Show an employee's birth date" << endl <<
  "7) Show an employee's salary" << endl << "8) Show an employee's address" << endl <<
  "9) Show an employee's phone number" << endl << "10)Compare two employee's names" << endl <<
  "11) Compare two employees in terms of salary and year of hiring" << endl;
  int choice;
  cin >> choice;

    int person;
  if (choice <= 9) {
    cout << "Which employee's information would you like to see?\n Enter 1 or 2:";
    cin >> person;
  }

  switch(choice) {
    case 1:
      if (person == 1)
      cout << e1.getId();
      else
      cout << e2.getId();
      break;
    case 2:
      if (person == 1)
      cout << e1.getFirst();
      else
      cout << e2.getFirst();
      break;
    case 3:
      if (person == 1)
      cout << e1.getLast();
      else
      cout << e2.getLast();
      break;
    case 4:
      if (person == 1)
      cout << e1.getYear();
      else
      cout << e2.getYear();
      break;
    case 5:
      if (person == 1)
      cout << e1.getName();
      else
      cout << e2.getName();
      break;
    case 6:
      if (person == 1)
      cout << e1.getBirth();
      else
      cout << e2.getBirth();
      break;
    case 7:
      if (person == 1)
      cout << e1.getSalary();
      else
      cout << e2.getSalary();
      break;
    case 8:
      if (person == 1)
      cout << e1.getAddress();
      else
      cout << e2.getAddress();
      break;
    case 9:
      if (person == 1)
      cout << e1.getPhone();
      else
      cout << e2.getPhone();
      break;
    case 10:
      if (e1.compareName(e2))
      cout << "The two employees have the same last name.";
      else
      cout << "The two employees don't have the same last name.";
      break;
    case 11:
      if (e1.compareBoth(e2))
      cout << "The two employees have the same salary or they were hired the same year.";
      else
      cout << "The two employees don't have the same salary and were not hired the same year.";
      break;
    default:
      cout << "You did not enter a good number. \nPlease try again.";
  }
cout << "\nWould like to have more information? \n1) Yes  2) No";
int ans;
cin >> ans;
if (ans == 2)
  cont = false;

}

}
