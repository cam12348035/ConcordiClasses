//Question 2
//Program calculating net income and tax portion

#include <iostream>
using namespace std;

int main() {
  int inc, netinc;

  cout << "Enter your income: ";
  cin >> inc;

  if (inc >= 100000) {
    netinc = (inc*10)/6;
  } else if (inc >= 80000) {
    netinc = (inc*10)/7;
  } else if (inc >= 60000) {
    netinc = (inc*10)/8;
  } else if (inc >= 40000) {
    netinc = (inc*10)/9;
  } else {
    netinc = inc;
  }

  cout << netinc;
  return 0;
}
