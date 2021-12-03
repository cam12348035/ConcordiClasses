#include <iostream>
using namespace std;

int add (int x, int y) {
  int a;
  a = x+y;
  return a;
}

int substract (int x,int y) {
  return x-y;
}

int multiply (int x, int y) {
  return x*y;
}


int main () {

int option, num = 0, option2 = 1;
cout << "Please choose a number: 1:add, 2:substract, 3:divide, 4:multiply.\n";
cin >> option;

while (option2 == 1) {
  switch (option) {
  case 1:
  int x,y;
  cout << "First number?:";
  cin >> x;
  cout << "Second number?:";
  cin >> y;
  num = num + add(x,y);
  cout << num;
  break;

  case 2:
  cout << "First number?:";
  cin >> x;
  cout << "Second number?:";
  cin >> y;
  num = num + substract(x,y);
  cout << num;
  break;

  case 3:
  cout << "not done yet!";
  break;

  case 4:
  cout << "First number?:";
  cin >> x;
  cout << "Second number?:";
  cin >> y;
  num = num + multiply(x,y);
  cout << num;
  break;
  }
cout << "\nAgain? 1=y, 0=n";
cin >> option2;
if (option2==0)
  break;
}




return 0;
}
