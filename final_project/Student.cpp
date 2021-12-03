#include "Student.h"

Student::Student() {

  fname = "undefined";
  lname = "undefined";
  id = -1;
  birth = "undefined";
  gpa = -1;
  year = -1;
  credit = -1;
  program = "undefined";

}

//set functions
  void Student::setFName(string fval) {
    fname = fval;
  }
  void Student::setLName(string lval) {
    lname = lval;
  }
  void Student::setId(int ival) {
    id = ival;
  }
  void Student::setBirth(string bval) {
    birth = bval;
  }
  void Student::setGPA(double gval) {
    gpa = gval;
  }
  void Student::setYear(int yval) {
    year = yval;
  }
  void Student::setCredit(int cval) {
    credit = cval;
  }
  void Student::setProgram(string pval) {
    program = pval;
  }

//get functions
  string Student::getFName() {
    return fname;
  }
  string Student::getLName() {
    return lname;
  }
  int Student::getId() {
    return id;
  }
  string Student::getBirth() {
    return birth;
  }
  double Student::getGPA() {
    return gpa;
  }
  int Student::getYear() {
    return year;
  }
  int Student::getCredit() {
    return credit;
  }
  string Student::getProgram() {
    return program;
  }



//other functions
  bool Student::CompleteProgram(int idval) {
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


    string prog;
    string cred;
    for (int i = 0; i < 5; i++) {
      string temp = result[i][2];
      auto pos = temp.find_first_not_of(' ');
      auto str = temp.substr(pos != string::npos ? pos : 0);
      int idtemp = stoi(str);
      if (idtemp == idval) {
        prog = result[i][7];
        cred = result[i][6];
      } else if (i == 5)
        return false;
    }

    auto pos = prog.find_first_not_of(' ');
    string pro = prog.substr(pos != string::npos ? pos : 0);
    pos = cred.find_first_not_of(' ');
    auto str = cred.substr(pos != string::npos ? pos : 0);
    int cre = stoi(str);


    if (pro == "B") {
      if (cre >= 140)
        return true;
      else
        return false;
    } else if (pro == "M") {
      if (cre >= 16)
        return true;
      else
        return false;
    } else {
      if (cre >= 12)
        return true;
      else
        return false;
    }
  }


  string Student::StudentStatus(double gval) {
    if (gval >= 3.5)
      return "A+";
    else if (gval >= 3)
      return "A";
    else if (gval >= 2.5)
      return "B";
    else if (gval >= 2)
      return "C";
    else
      return "D";
  }


  void Student::Print_Std_Info(int idval) {
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

    int num;
    for (int i = 0; i < 5; i++){
      string temp = result[i][2];
      auto pos = temp.find_first_not_of(' ');
      auto str = temp.substr(pos != string::npos ? pos : 0);
      int idtemp = stoi(str);
        if (idtemp == idval) {
          num = i;
          break;
        } else if (i == 5) {
          cout << "Unrecongnized id";
          exit(EXIT_FAILURE);
        }
    }

    cout << "First name:" << result[num][0] << endl
    << "Last name:" << result[num][1] << endl
    << "ID:" << result[num][2] << endl
    << "Date of birth:" << result[num][3] << endl
    << "GPA:" << result[num][4] << endl
    << "Starting year:" << result[num][5] << endl
    << "Completed credits:" << result[num][6] << endl
    << "Program (B: bachelor, M: master's, P: Ph.D.):" << result[num][7];

  }


  int Student::Compare_GPA(Student second) {
    if (gpa > second.gpa)
      return id;
    else if (gpa < second.gpa)
      return second.id;
    else
      return 0;
  }
