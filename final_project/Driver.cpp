#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Student_Staff.h"
using namespace std;

int main() {
  bool cont = true;
  while (cont) {
    Student_Staff one;
    int size = 5;
    Student arr[size];

    for (size_t i = 0; i < size; i++) {
      arr[i] = one.student_array[i];
    }

    Staff staarr[size];
    for (size_t i = 0; i < size; i++) {
      staarr[i] = one.staff_array[i];
    }

    int option;
    cout << "Which option would you like to test?\n1) Highest GPA \n2) Number of Undergrads\n"
    << "3) Same year hired \n4) If student completed program \n5) Grade at a GPA \n"
    << "6) Print a certain students information \n7) Compare two students GPA \n"
    << "8)Print a certain staff's info \n9) Calculate a certain staff's salary with their bonus\n"
    << "10)Compare two staff's experience\n";
    cin >> option;

    switch (option) {
      case 1:
        one.Highest_GPA(arr, size);
        break;
      case 2:
        cout << one.N_of_UnderGrad(arr, size);
        break;
      case 3:
        cout << "Which year?";
        int year;
        cin >> year;
        one.Same_Hire_Year(staarr, size, year);
        break;
      case 4:
        int idtemp;
        cout << "What student id?";
        cin >> idtemp;
        if(arr[1].CompleteProgram(idtemp))
          cout << "Program completed.";
        else
          cout << "Program not completed";
        break;
      case 5:
        double gtemp;
        cout << "What gpa number?";
        cin >> gtemp;
        cout << arr[1].StudentStatus(gtemp);
        break;
      case 6:
        cout << "What  student id?";
        cin >> idtemp;
        arr[1].Print_Std_Info(idtemp);
        break;
      case 7:
        int a, b;
        cout << "Please give a number from 0-4.\n";
        cin >> a;
        cout << "Please give a second one.\n";
        cin >> b;
        cout << "The person with the higher GPA has for id: \n";
        cout << arr[a].Compare_GPA(arr[b]);
        break;
      case 8:
        cout << "What staff id?";
        cin >> idtemp;
        staarr[0].Print_Stf_Info(idtemp);
        break;
      case 9:
        cout << "Chose a number between 0-4.";
        cin >> a;
        cout << "New salary: " << staarr[a].CalculateSalary();
        break;
      case 10:
        cout << "Please give a number from 0-4.\n";
        cin >> a;
        cout << "Please give a second one.\n";
        cin >> b;
        cout << "The name of the one with the most experience is: " << staarr[a].Compare_Exp(staarr[b]);
        break;
      default:
        cout << "You did not enter the right number.";

    }



    int conti;
    cout << "\nWould you like to continue? 1) Yes, 2) No";
    cin >> conti;
    if (conti == 2)
      cont = false;
  }
}
