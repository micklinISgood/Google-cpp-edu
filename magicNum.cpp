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
	int a;
	cout << "show magic number of :";
	if(!(cin>>a)){
		cout<< "not a number"; return 0;
	}
	cout << reverse(a) << endl;

	return 0;
}
