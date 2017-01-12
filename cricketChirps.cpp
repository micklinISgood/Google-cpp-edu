#include <iostream>
using namespace std;

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
