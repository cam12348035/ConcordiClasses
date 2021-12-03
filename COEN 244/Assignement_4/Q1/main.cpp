#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool AddnewTA();

int main() {
  fstream fileTA;
  fileTA.open("TAs.txt", ios::in);

//receive size, put into int
    string sizeS;
    getline(fileTA, sizeS);
    int size = stoi(sizeS);
//receive list of all possible TAs
    string list[size];
    string temps;
    int count = 0;
    while (getline(fileTA, temps)) {
      list[count] = temps;
      count++;
    }
  fileTA.close();

//search if a person is a graduate, if yes add them to a new array
  string listout[size];
  int sizeout = 1;
  for (int i = 0; i < size; i++) {
    if (list[i].find("Grad") != string::npos) {
      listout[sizeout] = list[i];
      sizeout++;
    }
  }
//add size to the first line of the array
  temps = to_string(sizeout - 1);
  listout[0] = temps;

//reenter the second array into the txt file
  ofstream fileTA2;
  fileTA2.open("TAs.txt");
  for (int i = 0; i < sizeout; i++)
    fileTA2 << listout[i] << endl;
  fileTA2.close();

  cout << "Operation successful! All alumni have been removed from the list\n"
  << "Would you like to add a TA to the list? 1) Yes 2) No";
  int ans;
  cin >> ans;
  if (ans== 1) {
    if (AddnewTA())
      cout << "The TA has been added to the list";
    else
      cout << "There has been a problem, please try again.";
  }

}




bool AddnewTA() {
    fstream fileTA;
    fileTA.open("TAs.txt", ios::in);

    string sizeS;
    getline(fileTA, sizeS);
    int size = stoi(sizeS);
//receive list of all possible TAs
    string list[size];
    string temps;
    int count = 0;
    while (getline(fileTA, temps)) {
      list[count] = temps;
      count++;
    }
  fileTA.close();

//have the user input data
  stop:
    string allInfo;
    int studentID;
    cout << "Please enter your TA's Student ID \n";
    cin >>studentID;

    temps = to_string(studentID);
//check if student id already exists, if yes, loop back
    for (int i = 0; i <size; i++) {
    if (list[i].find(temps) != string::npos) {
        cout << "This student ID is already listed\nPlease try again\n\n\n";
        goto stop;
      }
    }

    allInfo = allInfo + " " + temps;
    cout << "Please enter each information, and press enter right after: \nFirst Name \nLast Name \n Hire Year\n Number of working hours\n(Your TA is defined as a Graduate)\n\n";
    for (int i = 0; i < 4; i++) {
      if (i == 3)
        allInfo = allInfo + " Grad";
      cin >> temps;
      allInfo = allInfo + " " + temps;
    }

//input all TAs and size into a new array
    string listout[size+2];
    temps = to_string(size+1);
    for (int i = 0; i < size+2; i++) {
      if (i == 0)
        listout[i] = temps;
      else if (i == size+1)
        listout[i] = allInfo;
      else
        listout[i] = list[i-1];
    }


      ofstream fileTA2;
      fileTA2.open("TAs.txt");
      for (int i = 0; i < size+2; i++)
        fileTA2 << listout[i] << endl;
      fileTA2.close();

return true;
}
