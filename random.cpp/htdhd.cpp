#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  ifstream file2;
  file2.open("staff.txt");
  string line2;
  int count = 0;
  string cell2;
  array<array<string, 7>, 5> result2;
  while(getline(file2, line2)) {
    stringstream lineStream(line2);
    int count2 = 0;

     while((getline(lineStream,cell2, ',')) && (count != 0))
        {
            result2[count-1][count2] = cell2;
            count2++;
        }
     count++;

  }
  file2.close();


    for (size_t i = 0; i < result2.size(); i++){
  string temp = result2[i][5];
  auto pos = temp.find_first_not_of(' ');
  auto str = temp.substr(pos != string::npos ? pos : 0);
  char temp5 = str[0];

}
}
