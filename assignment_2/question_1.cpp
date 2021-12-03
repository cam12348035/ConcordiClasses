//Question 1
//Program draws a house based on specifications
#include <iostream>
using namespace std;

int main() {
  string name;

//1)
  cout << "Please enter your first name: ";
  cin >> name;
  cout << "Hello " << name << ", welcome to house-builder.\n";

//2)
  int house = 0;
  while (house!=(-1)) {

    int wid, loopn = 1, heig;
    cout << "Please enter the desired width of your house: ";
    cin >> wid;

    while (!((wid >= 2) && (wid%2 == 0))) {
      cout << "Please enter an interger multiple of 2 and superior to 2: ";
      cin >> wid;
      loopn ++;
      if (loopn >= 3){
        cout << "Too many tries.";
        return 0;
      }
    }
    
    cout << "Please enter the desired height of your house: ";
    cin >> heig;

//3)
  //a)
    for (int i=1; i<=(wid/2); i++) {
      for (int s=(wid/2); s>i; s--)
        cout << " ";

      for (int j=1; j<=i; j++)
        cout << "**";

      cout << "\n";
    }

  //b)
    for (int i=1; i<=heig; i++) {
      cout << "|";
      for (int j=1; j<=wid-2; j++)
        cout << " ";
      cout << "|\n";
    }

    for (int i=1; i<=wid; i++)
      cout << "-";

//4)
    house++;
    string yn;
    cout << "\n\nWould you like another beautiful house?\n Answer with yes or no: ";
    cin >> yn;
    if (yn=="no")
      break;

  }

  if (house==1)
    cout << "Goodbye " << name << ", hope you liked your house!";
  else
    cout << "Goodbye " << name << ", hope you liked your " << house << " houses!";

  return 0;
}
