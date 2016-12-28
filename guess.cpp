// get_input.cpp: Maggie Johnson
// Description: Illustrate the use of cin to get input.

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {
  int iSecret;
  int input_var = -1;
  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  iSecret = rand() % 99+1;
  // Enter the do while loop and stay there until either
  // a non-numeric is entered, or -1 is entered. Note that
  // cin will accept any integer, 4, 40, 400, etc.
  do {
    cout << "Guess a number: ";
    // The following line accepts input from the keyboard into
    // variable input_var.
    // cin returns false if an input operation fails, that is, if
    // something other than an int (the type of input_var) is entered.
    if (!(cin >> input_var)) {
      cout << "You entered a non-numeric. Exiting..." << endl;
      //break;
      cin.clear();
      cin.ignore(1000,'\n');
      continue;
      // exit the do while loop
    }
    if (input_var == iSecret ) {
      cout << "Guessed! " << input_var << endl;
      break;
    }else if(input_var < iSecret) cout << "Guessed number is lower than secret"<<endl;
    else cout <<  "Guessed number is higher than secret"<<endl;


  } while (input_var != -1);
  cout << "All done." << endl;
  return 0;
}
