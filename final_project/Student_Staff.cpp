#include "Student_Staff.h"

void Student_Staff::Highest_GPA(Student arr[], int size){
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

  string high = result[0][4];
  int num;
  for (int i = 1; i < 5; i++) {
    if (high < result[i][4]){
      high = result[i][4];
      num = i;
    }
  }

  cout << "First name:" << result[num][0] << endl
  << "Last name:" << result[num][1] << endl
  << "ID:" << result[num][2] << endl
  << "Date of birth:" << result[num][3] << endl
  << "GPA:" << result[num][4] << endl
  << "Starting year:" << result[num][5] << endl
  << "Completed credits:" << result[num][6] << endl
  << "Program (B: bachelor, M: master's, P: Ph.D.):\n" << result[num][7];
}

int Student_Staff::N_of_UnderGrad(Student arr[], int size){
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

  count = 0;
  for (size_t i = 0; i < result.size(); i++){
    if (result[i][7] == " B")
      count++;
  }
  return count;
}

void Student_Staff::Same_Hire_Year(Staff a[], int b, int c) {
  ifstream file;
  file.open("staff.txt");
  string line;
  int count = 0;
  string cell;
  array<array<string, 7>, 5> result;
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
    auto temp = result[i][4];
    auto pos = temp.find_first_not_of(' ');
    auto str = temp.substr(pos != string::npos ? pos : 0);
    int temp2 = stoi(str);
    if (temp2 == c) {
      cout << result[i][0] << result[i][1] << endl;

    }
  }
}
