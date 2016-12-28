// get_input.cpp: Maggie Johnson
// Description: Illustrate the use of cin to get input.

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {
  int a,b,iSecret;
  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 100: */
  iSecret = rand() % 100+1;
  // Enter the do while loop and stay there until either
  // a non-numeric is entered, or -1 is entered. Note that
  // cin will accept any integer, 4, 40, 400, etc.
  do {
    cout << "Enter two numbers for gcd"<<endl;
    // The following line accepts input from the keyboard into
    // variable guess.
    // cin returns false if an input operation fails, that is, if
    // something other than an int (the type of guess) is entered.
    if (!(cin >> a >>b)) {
      cout << "You entered a non-numeric. Exiting..." << endl;
      //break;
      cin.clear();
      cin.ignore(1000,'\n');
      continue;
      // exit the do while loop
    }
    
    cout << "a: "<<a <<",b:"<<b; 


  } while (iSecret != a);
  cout << "Congratulations!" << endl;
  return 0;
}
