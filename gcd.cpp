// get_input.cpp: Maggie Johnson
// Description: Illustrate the use of cin to get input.

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
int gcd(int, int);
int gcdit(int, int);

// A non-recursive version of Euclid's algorithm
int gcdgoogle(int a, int b) {
  int temp;
  while (b != 0) {
    cout << a<<","<<b<<endl;
    temp = a % b;
    a = b;
    b = temp;
  }
  return(a);
}

int main() {
  int a,b,gcdNum;
  char iSecret;

  // Enter the do while loop and stay there until either
  // a non-numeric is entered, or -1 is entered. Note that
  // cin will accept any integer, 4, 40, 400, etc.
  do {
    cout << "Enter two numbers for gcd, ctrl-c for exit"<<endl;
    
    // The following line accepts input from the keyboard into
    // variable guess.
    // cin returns false if an input operation fails, that is, if
    // something other than an int (the type of guess) is entered.

	
    if (!(cin >> a >>b)) {
      cout << "You entered a non-numeric. Retry..." << endl;
      //break;
      cin.clear();
      cin.ignore(1000,'\n');
      continue;
      // exit the do while loop
    }
    
    gcdNum = gcdgoogle(a,b); 
    cout << "gcd("<<a <<","<<b<<"):"<<gcdNum<<endl; 


  } while (1);
  return 0;
}

int gcd(int a, int b){
  //cout << "gcd( "<<a <<","<<b<<"):"<<endl; 
  if (a==1 || b==1) return 1;
  if (a==0) return abs(b);
  if (b==0) return abs(a); 
  if (abs(a) > abs(b)) return gcd(a%b, b);
  if (abs(b) > abs(a)) return gcd(a, b%a);
  return a; 
	
}

int gcdit(int a, int b){
  //cout << "gcd( "<<a <<","<<b<<"):"<<endl;
  int tmp_a=a, tmp_b=b;
  while(!(tmp_a==1||tmp_b==1) && tmp_a !=0 && tmp_b !=0){
	if(abs(tmp_a)>abs(tmp_b)) tmp_a = tmp_a% tmp_b;
        else if( abs(tmp_a)<abs(tmp_b)) tmp_b = tmp_b% tmp_a;
	else if( abs(tmp_a)==abs(tmp_b)) return abs(tmp_a);
  }  
  if (tmp_a==0) return abs(tmp_b);
  if (tmp_b==0) return abs(tmp_a);  
  return 1;
}
