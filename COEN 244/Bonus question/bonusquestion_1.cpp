//Deck shuffling program
//Final card:1993


#include <iostream>
#include <array>
using namespace std;

void shuffle(int[], int);

int main () {

  int deck[2020];
  for (int i=0; i<2020; i++)
    deck[i] = i+1;

    cout << "Initial deck: \n";
  for (int i=0; i<2020; i++) {
    cout << "|" << deck[i] << "|";
    if (i%100 == 0 &&i!=0)
      cout << endl;
  }
  cout << endl;
  int num = 2020;
  shuffle(deck, num);

  return 0;
}


void shuffle(int arr[], int num) {
  if (num > 1) {
    int temp = arr[0];
    for (int i = 0; i < num-2; i++)
      arr[i]=arr[i+2];
    arr[num-2] = temp;
    num--;

    for (int i=0; i < num; i++) {
      cout << "|" << arr[i] << "|";
      if (i%100 == 0 &&i!=0)
        cout << endl;
    }
    cout << endl << endl;
    shuffle(arr, num);
  } else
    cout << "Last card:" << arr[0];

}
