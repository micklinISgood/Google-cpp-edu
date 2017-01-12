#include <iostream>
using namespace std;

/***
The common field cricket chirps in direct proportion to the current temperature. Adding 40 to the number of time a cricket chirps in a minute, then dividing that value by 4 gives us the temperature. Write a program that takes as input the number of chirps in a minute and prints the current temperature. For example,
Number of chirps: 120
The temperature is: 40.0 degrees. 
***/
int main(){
	int a; 
	
	do{
		cout << "A number for conversion :";

		if(!(cin>>a)){ 
			cout<<"not a number";
			break;
		}
		cout << "Number of chirps: " << a <<endl;
		cout << "The temperature is: " <<(double) (a+40)/4 <<" degrees"<< endl;

	}while(1);

	return 0;
}
