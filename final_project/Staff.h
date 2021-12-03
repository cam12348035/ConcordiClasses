#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

class Staff {

  public:
    Staff();
// setter functions
    void setFName(string fname);
    void setLName(string lname);
    void setId(int id);
    void setPNum(int pnum);
    void setHire(string hire);
    void setBonus(char bonus);
    void setSal(int sal);

// getter functions
    string getFName();
    string getLName();
    int getId();
    int getPNum();
    string getHire();
    char getBonus();
    int getSal();

// other functions
    void Print_Stf_Info(int id);
    double CalculateSalary();
    string Compare_Exp(Staff);

  private:
    string fname;
    string lname;
    int id;
    int pnum;
    string hire;
    char bonus;
    int sal;
};
