#include <iostream>
using namespace std;

int main () {
  int a, b, c;
  cout << "Enter the first interger.\n";
  cin >> a;
  cout << "Enter the second interger.\n";
  cin >> b;
  cout << "Enter the third interger.\n";
  cin >> c;

  if ((a<=b) && (a<=c)) {
    if (b<=c)
      cout << a << ", " << b << ", " << c;
     else
      cout << a << ", " << c << ", " << b;
  } else if ((b<=a) && (b<=c)) {
    if (c<=a)
      cout << b << ", " << c << ", " << a;
    else
      cout << b << ", " << a << ", " << c;
  } else if ((c<=a) && (c<=a)) {
    if (a<=b)
      cout << c << ", " << a << ", " << b;
    else
      cout << c << ", " << b << ", " << a;
  }


return 0;
}
