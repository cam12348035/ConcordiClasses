#include <iostream>
#include <iomanip>
#include <array>
using namespace std;


void Right(array<int,10> &grid, int);
void Left(array<int,10> &grid, int);
int Display(array<int,10> &grid);
void Reboot(array<int,10> &grid);
void showArray(array<int,10> &grid);
void Cancel(array<int,10> &grid, array<array<int,100>,10>&steps, int, int &);
void Replay(array<array<int,100>,10>&steps, int, int);


int main () {
//initializing the grid
  array<int, 10>grid;
  for (size_t i{0}; i < grid.size(); i++)
    grid[i] = 0;
  grid[0] = 1;

//for cancel function
array<array<int,100>,10>steps;


//command menu
int command, move, num, stepnum = 0;

for(int i = 0; i >= 0; i++){
  cout << "\nWelcome to the controller menu.\n" << "Please enter the numbers of one of the following commands.\n" ;
  cout << " 1 Move to the right\n" << " 2 Move to the left\n" << " 3 Display position\n";
  cout << " 4 Reboot\n" << " 5 Show grid\n" << " 6 Exit\n" << " 7 Cancel\n" << " 8 Replay\n";
  cin >> command;
  cout << endl;


  switch (command) {
    case 1:
      for (size_t j{0}; j < steps.size(); j++)
        steps[stepnum][j] = grid[j];
      stepnum++;

      cout << "By how much would you like to move your robot?";
      cin >> move;
      Right(grid, move);
      break;

    case 2:
      for (size_t j{0}; j < steps.size(); j++)
        steps[stepnum][j] = grid[j];
      stepnum++;

      cout << "By how much would you like to move your robot?";
      cin >> move;
      Left(grid, move);
      break;

    case 3:
      int place;
      place = Display(grid);
      cout << "Position is: " << place << endl;
      break;

    case 4:
      Reboot(grid);
      break;

    case 5:
      showArray(grid);
      break;

    case 6:
      return 0;

    case 7:
      cout << "\nHow many steps do you want to cancel?\n";
      cin >> num;
      Cancel(grid, steps, num, stepnum);
      break;

    case 8:
      cout << "\n How many previous steps would you like to replay?\n";
      cin >> num;
      Replay(steps, num, stepnum);
      break;

    default:
      cout << "\nYou did not enter a valid command.\n";
  }
}

}



void Right(array<int,10> &grid, int move) {

  int position = Display(grid);

  if (position+move >= grid.size())
    cout << "\nThe robot would leave the array.\n";
  else
    grid[position] = 0;
    grid[position+move] = 1;
}


void Left(array<int,10> &grid, int move){

  int position = Display(grid);

  if (position-move >= grid.size())
    cout << "\nThe robot would leave the array.\n";
  else
    grid[position] = 0;
    grid[position-move] = 1;
}


int Display(array<int,10> &grid) {
  int position;
  for (size_t i{0}; i < grid.size(); i++) {
    if (grid[i] == 1) {
      position = i;
      break;
    }
  }
  return position;
}


void Reboot (array<int,10> &grid) {
  for (size_t i{0}; i < grid.size(); i++)
    grid[i] = 0;
  grid[0] = 1;
}


void showArray(array<int,10> &grid) {
  for (size_t i{0}; i < grid.size(); i++) {
    if (grid[i] == 0)
      cout << "|   |";
    else
      cout << "| X |";
  }
  cout << endl;
  for (size_t i{0}; i < grid.size(); i++) {
    if (i != 0)
      cout << setw(5) << i;
    else
      cout << setw(3) << i;
  }
  cout << endl;
}


void Cancel(array<int,10> &grid, array<array<int,100>,10>&steps, int num, int &stepnum) {
  if (stepnum-num < 0)
    cout << "You are trying to return to a step before the initial step.";
  else {
    int prevstep = stepnum-num;

    for (size_t j{0}; j < grid.size(); j++) {
      grid[j] = steps[prevstep][j];

    }
    stepnum = prevstep;
  }
}

void Replay(array<array<int,100>,10>&steps, int num, int stepnum) {
  if (stepnum-num < 0)
    cout << "You are trying to show steps going before the initial step.";
  else {
    int prevstep = stepnum-num;
    cout << "List of previous steps: \n";
    for (int j = stepnum - 1; j >= prevstep; j--) {
      for (size_t k{0}; k < steps.size(); k++) {
        if (steps[j][k] == 0)
          cout << "|   |";
        else
          cout << "| X |";
      }
      cout << endl;
    }
  }

}
