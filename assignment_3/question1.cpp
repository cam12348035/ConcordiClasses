#include <iostream>
#include <array>
#include <iomanip>
using namespace std;


int main() {
//initializing array
  array<int, 9>num;
  for (int i=0; i < num.size(); i++)
    num[i] = 0;

//input
double salary = 0;
int count = 0, sales = 0;
cout << "Please enter the sales of each salesperson" << endl;
cout << "Enter a negative number when done" << endl;
while(sales >= 0) {
  count++;
  cout << "Salesperson number " << count << ":";
  cin >> sales;
  salary = sales * 0.09 + 200;

  if ((salary>=200) && (salary < 300))
    num[0]++;
  else if ((salary>=300) && (salary < 400))
    num[1]++;
  else if ((salary>=400) && (salary < 500))
    num[2]++;
  else if ((salary>=500) && (salary < 600))
    num[3]++;
  else if ((salary>=600) && (salary < 700))
    num[4]++;
  else if ((salary>=700) && (salary < 800))
    num[5]++;
  else if ((salary>=800) && (salary < 900))
    num[6]++;
  else if ((salary>=900) && (salary < 1000))
    num[7]++;
  else if (salary >= 1000)
    num[8]++;
}

//output
cout << "Number of salespeople in each salary range: " << endl;
for(int i = 0; i < num.size(); i++) {
  if (i<(num.size() -1))
    cout << setw(7) << i + 2 << "00-" << i + 2 << "99:  " << num[i] << endl;
  else
    cout << setw(8) << "1000 and over:  " << num[8] << endl;
}

return 0;
}
