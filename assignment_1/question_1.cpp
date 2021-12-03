
//Question 1
//Entering two intergers and outputting many results


#include <iostream>
using namespace std;
int main() {
  int a, b;
  cout << "Enter the first interger: ";
  cin >> a;
  cout << "Enter the second interger: ";
  cin >> b;

  cout << "The results are:\n\n";
  cout << "The sum is: " << a+b;
  cout << "\nThe difference is: " << a-b;
  cout << "\nThe produt is: " << a*b;
  cout << "\nThe quotient is: " << a/b;
  cout << "\n The average is: " << (a+b)/2;

return 0;
}
