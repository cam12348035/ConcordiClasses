#include <iostream>
#include <vector>
using namespace std;


int main () {
int asize;
cout << "Please enter the length of a side of your square array: ";
cin >> asize;

vector<vector<int>> square(asize, vector<int> (asize, 0));
//input
for (size_t i = 0; i < asize; i++) {
  for (size_t j = 0; j < asize; j++) {
    cout << "\nPlease enter the value at the position:"
    << endl << "Row number " << i + 1 << "  Column number " << j + 1 << endl;
    cin >> square[i][j];
  }
}

//calculation
int sum = 0;
for (size_t i = 0; i < asize; i++)
  sum += square[i][i];

for (size_t i = 0; i < asize; i++) {
    if (i != asize - i - 1)
      sum += square[i][asize-i-1];
}

cout << "\nThe sum of the two diagonals of your square array is: " << sum;

}
