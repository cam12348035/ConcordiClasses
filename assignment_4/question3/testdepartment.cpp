#include <iostream>
#include <array>
#include "Department.h"
using namespace std;

int main() {

//employee and department creation
    Department computer;
    int count = 0;

    string tempid;
    cout << "Please enter the ID of your department: ";
    cin >> tempid;
    computer.setDId(tempid);

    string name;
    cout << "Please enter the name of your department: ";
    cin >> name;
    computer.setDName(name);

    string hist;
    cout << "Please enter the history of your department: ";
    cin >> hist;
    computer.setDHist(hist);

    int ival, yval, arval;
    string fval, lval, bval, aval, tnval;
    double sval;
    while (count < 5) {
      cout << "Please enter the information for employee number " << count+1 << endl;
      Employee temp;
      cout << "ID number: ";
      cin >> ival;
      temp.setId(ival);

      cout << "Year hired: ";
      cin >> yval;
      temp.setYear(yval);

      cout << "First name: ";
      cin >> fval;
      temp.setFirst(fval);

      cout << "Last Name: ";
      cin >> lval;
      temp.setLast(lval);

      cout << "Birth date (DD/MM/YYYY): ";
      cin >> bval;
      temp.setBirth(bval);

      cout << "Salary: ";
      cin >> sval;
      temp.setSalary(sval);

      cout << "Full address (Enter n when done):";
      string aval2;
      while (aval2 != "n") {
        cin >> aval2;
        aval = aval + " " + aval2;
      }
      temp.setAddress(aval);

      cout << "Phone number (Put a space only between the area code and the number): ";
      cin >> arval;
      cin >> tnval;
      temp.setPhone(arval, tnval);

      computer.addEmploy(temp);
      count ++;
    }

//function testing
bool cont = true;
while (cont) {
    cout << endl << "Please enter a number from 1 to 8: " << endl << "1: Output the department's ID"
    << endl << "2: Output the department's name" << endl << "3: Output the department's history"
    << endl << "4: Output the list of the employees" << endl << "5: Output the number of employees in the department"
    << endl << "6: Add an employee" << endl << "7: Remove the last employee inputted"
    << endl << "8: Find by id if an employee is in the department" << endl;
    int choice;
    cin >>choice;

    switch (choice) {
      case 1:
        cout << "The department ID is: " << computer.getDId();
        break;

      case 2:
        cout << "The department name is: " << computer.getDName();
        break;

      case 3:
        cout << computer.getDHist();
        break;

      case 4:
        computer.printList();
        break;

      case 5:
        computer.printNum();
        break;

      case 6: {
        cout << "Please enter the information for employee number " << count+1 << endl;
        Employee temp;
        cout << "ID number: ";
        cin >> ival;
        temp.setId(ival);

        cout << "Year hired: ";
        cin >> yval;
        temp.setYear(yval);

        cout << "First name: ";
        cin >> fval;
        temp.setFirst(fval);

        cout << "Last Name: ";
        cin >> lval;
        temp.setLast(lval);

        cout << "Birth date (DD/MM/YYYY): ";
        cin >> bval;
        temp.setBirth(bval);

        cout << "Salary: ";
        cin >> sval;
        temp.setSalary(sval);

        cout << "Full address (Enter n when done):";
        string aval2;
        while (aval2 != "n") {
          cin >> aval2;
          aval = aval + " " + aval2;
        }
        temp.setAddress(aval);

        cout << "Phone number (Put a space only between the area code and the number): ";
        cin >> arval;
        cin >> tnval;
        temp.setPhone(arval, tnval);

        computer.addEmploy(temp);
        break;
      }
      case 7:
        computer.removeEmploy();
        break;
      case 8:
        cout << "What is the ID of the employee you are searching for?";
        int num;
        cin >> num;
        if (computer.
          findEmploy(num))
          cout << "Your employee is in this department.";
        else
          cout << "Your employee is not in this department.";
        break;
      default:
        cout << "You did not enter a number from 1 to 8. Please try again.";
    }

  int answ;
  cout << "\nWould you like to enter another command? 1) for yes, 2) for no";
  cin >> answ;
  if (answ == 2)
    cont = false;

}

}
