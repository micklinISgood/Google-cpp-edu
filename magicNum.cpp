/*
Here is a "magic number" problem: Ask a user to enter a three-digit number whose first digit is greater than its last. Your program will reverse the number, and subtract the reversal from the original number. Finally, reverse the resulting number, and add it to its unreversed form. Output the final result. The original number that the user enters must be of integer type (not three chars). Think about how to write a function that takes an integer as input and returns the reverse of that number. Example:
input number: 901
reverse it: 109
subtract: 901 - 109 = 792
reverse it: 297
add: 297 + 792 = 1089   

*/

#include <iostream>
using namespace std;

int reverse(int a){
	int b = 0;
	while(a!=0){
		b += a%10;
		a /= 10;

		if (a==0) break;
 		b*= 10;
		
	
	}
	
	return b;
}

int main(){
	int a,b,c;
	cout << "input number :";
	if(!(cin>>a)){
		cout<< "not a number"; return 0;
	}
	b = reverse(a); 
	cout << "reverse it:"<<b << endl;
	c = a - b;

	cout << "subtract:"<<a <<" - "<<b << " = "<< c<< endl;
	b = reverse(c); 
	cout << "add:"<<c <<" + "<<b << " = "<< c+b << endl;


	return 0;
}
