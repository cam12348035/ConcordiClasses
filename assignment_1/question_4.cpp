//Question 5
//Returns if number prime or not

#include <iostream>
using namespace std;

int main() {

int num;
int test = 2;
cout << "Enter your interger\n";
cin >> num;

while (test <= num) {
  if ((num == test) && (num != 2)){
    cout << "Number is not a prime";
    break;
  } else if (num%test == 0){
    cout << "Number is a prime";
    break;
  } else {
    test++;
  }
}
return 0;
}
