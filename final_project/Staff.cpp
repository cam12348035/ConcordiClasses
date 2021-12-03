#include "Staff.h"

Staff::Staff() {

}

// setter functions
    void Staff::setFName(string fval){
      fname = fval;
    }
    void Staff::setLName(string lval){
      lname = lval;
    }
    void Staff::setId(int ival){
      id = ival;
    }
    void Staff::setPNum(int pval){
      pnum = pval;
    }
    void Staff::setHire(string hval){
      hire = hval;
    }
    void Staff::setBonus(char bval){
      bonus = bval;
    }
    void Staff::setSal(int sval){
      sal = sval;
    }

// getter functions
    string Staff::getFName(){
      return fname;
    }
    string Staff::getLName(){
      return lname;
    }
    int Staff::getId(){
      return id;
    }
    int Staff::getPNum(){
      return pnum;
    }
    string Staff::getHire(){
      return hire;
    }
    char Staff::getBonus(){
      return bonus;
    }
    int Staff::getSal(){
      return sal;
    }

// other functions
    void Staff::Print_Stf_Info(int idval) {
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
      << "Phone number:" << result[num][3] << endl
      << "Date of hiring:" << result[num][4] << endl
      << "Bonus code:" << result[num][5] << endl
      << "Current salary:" << result[num][6] << endl;
    }

    double Staff::CalculateSalary() {
      string temp;
      temp = bonus;
        if (temp == "A")
          return sal+(sal*0.08);
        else if (temp == "B")
          return sal+(sal*0.06);
        else if (temp == "C")
          return sal+(sal*0.03);
        else if (temp == "D")
          return sal+(sal*0.01);
        else
          return sal;
    }

    string Staff::Compare_Exp(Staff second) {
      if (hire < second.hire)
        return fname+lname;
      else if (hire > second.hire)
        return second.fname+second.lname;
      else
        return "Both";
    }
