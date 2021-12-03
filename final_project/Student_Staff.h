#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Student.h"
#include "Staff.h"
using namespace std;

class Student_Staff {
  public:
  Student_Staff() {

    ifstream file;
    file.open("students.txt");
    string line;
    int count = 0;
    string cell;
    array<array<string, 8>, 5> result;
    while(getline(file, line)) {
      stringstream lineStream(line);
      int count2 = 0;

       while((getline(lineStream,cell, ',')) && (count != 0))
          {
              result[count-1][count2] = cell;
              count2++;
          }
       count++;

    }
    file.close();

    for (size_t i = 0; i < result.size(); i++) {
      string temp = result[i][2];
      auto pos = temp.find_first_not_of(' ');
      auto str = temp.substr(pos != string::npos ? pos : 0);
      int temp2 = stoi(str);

      temp = result[i][4];
      pos = temp.find_first_not_of(' ');
      str = temp.substr(pos != string::npos ? pos : 0);
      double temp3 = stod(str);

      temp = result[i][5];
      pos = temp.find_first_not_of(' ');
      str = temp.substr(pos != string::npos ? pos : 0);
      int temp4 = stoi(str);

      temp = result[i][6];
      pos = temp.find_first_not_of(' ');
      str = temp.substr(pos != string::npos ? pos : 0);
      int temp5 = stoi(str);

      student_array[i].setFName(result[i][0]);
      student_array[i].setLName(result[i][1]);
      student_array[i].setId(temp2);
      student_array[i].setBirth(result[i][3]);
      student_array[i].setGPA(temp3);
      student_array[i].setYear(temp4);
      student_array[i].setCredit(temp5);
      student_array[i].setProgram(result[i][7]);
    }


    ifstream file2;
    file2.open("staff.txt");
    string line2;
    count = 0;
    string cell2;
    array<array<string, 7>, 5> result2;
    while(getline(file2, line2)) {
      stringstream lineStream(line2);
      int count2 = 0;

       while((getline(lineStream,cell2, ',')) && (count != 0))
          {
              result2[count-1][count2] = cell2;
              count2++;
          }
       count++;

    }
    file2.close();

    for (size_t i = 0; i < result2.size(); i++){
      string temp = result2[i][2];
      auto pos = temp.find_first_not_of(' ');
      auto str = temp.substr(pos != string::npos ? pos : 0);
      int temp2 = stoi(str);

      temp = result2[i][3];
      pos = temp.find_first_not_of(' ');
      str = temp.substr(pos != string::npos ? pos : 0);
      int temp3 = stoi(str);

      temp = result2[i][6];
      pos = temp.find_first_not_of(' ');
      str = temp.substr(pos != string::npos ? pos : 0);
      int temp6 = stoi(str);

      temp = result2[i][5];
      pos = temp.find_first_not_of(' ');
      str = temp.substr(pos != string::npos ? pos : 0);
      char temp5 = str[0];

      staff_array[i].setFName(result2[i][0]);
      staff_array[i].setLName(result2[i][1]);
      staff_array[i].setId(temp2);
      staff_array[i].setPNum(temp3);
      staff_array[i].setHire(result2[i][4]);
      staff_array[i].setBonus(temp5);
      staff_array[i].setSal(temp6);
    }

  }

  void Highest_GPA(Student a[], int b);
  int N_of_UnderGrad(Student a[], int b);
  void Same_Hire_Year(Staff a[], int b, int c);

  Student student_array[5];
  Staff staff_array[5];

  private:
};
