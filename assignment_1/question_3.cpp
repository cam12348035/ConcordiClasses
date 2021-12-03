//Question 3
//Caluclating temperatures 1-20 in C, F and K

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

int c=1;
double f, k;

cout << "Celsiuse  Fahrenheit  Kelvin\n";
while (c <= 20) {
  f = c*(9/5) +32;
  k = c+273.15;
  if (c<10)
    cout << c << "     " << setprecision(2) << fixed<< "    " << f << setprecision(3) << fixed << "       " << k << "\n";
  else
    cout << c << "    " << setprecision(2) << fixed<< "    " << f << setprecision(3) << fixed << "       " << k << "\n";
  c++;
}

}
