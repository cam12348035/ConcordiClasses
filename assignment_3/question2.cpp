#include <iostream>
#include <array>
#include <string>
using namespace std;

bool testPalindrome(string, string, int);

int main () {
  int num = 0;

  cout << "Please enter your string: \n";
  string word;
  getline(cin, word);
  bool answer = testPalindrome(word, word, num);
  if (answer)
    cout << "Your string is a palindrome.";
  else
    cout << "Your string is not a palindrome.";
}


bool testPalindrome(string a, string b, int num) {
  bool answer;
  int size = 0;
  for (int i = 0; a[i] != '\0'; i++)
    size ++;

  if ((size-2*num == 0) || (size-2*num == 1)){
     answer = true;
  }
  else if (a[num] == b[size-num-1]) {
    answer = testPalindrome(a, b, (num + 1));
  }
return answer;
}
