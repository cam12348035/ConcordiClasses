//Question 2
//Asks for two intergers then calculates a value from them depending on an character entered by user
#include <iostream>
#include <iomanip>
using namespace std;

void function1(int, int);
void function2(int, int, int &);
double function3(int, int);

int main () {
  int a, b;
  string option;
  cout << "Please enter two positive intergers\n";
  cout << "Please enter the lower bound: ";
  cin >> a;
  cout << "Please enter the upper bound: ";
  cin >> b;
  cout << "Please enter a character: ";
  cin >> option;

  if (option == "a") {
    function1(a, b);

  } else if (option == "b") {
    int result;
    function2(a,b, result);
    cout << result;

  } else if (option == "c") {
    double value;
    value = function3(a, b);
    //cout << value;
    cout << fixed << std::setprecision(3) << value;

  } else {
    cout << "Invalid input";
  }

return 0;
}


void function1(int x, int y) {
  cout << "The numbers in your interval which are multiple of both 3 and 7 are: ";
  while (x <= y) {
    if ((x%3 == 0) && (x%7 == 0))
      cout << x << " ";
    x++;
  }
}

void function2(int x, int y, int &result) {
  result = y-x;
}

double function3(int x, int y) {
double sum;
  while (x <= y) {
    sum = sum + (1.0 /x);
    x++;
  }

  return sum;
}
