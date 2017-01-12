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
