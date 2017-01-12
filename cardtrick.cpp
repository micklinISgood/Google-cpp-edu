/*
This is a number analogy to a famous card trick. Ask the user to enter a three-digit number. Think of the number as ABC (where A, B, C are the three digits of the number). Now, find the remainders of the numbers formed by ABC, BCA, and CAB when divided by 11. We will call these remainders X, Y, Z. Add them up as X+Y, Y+Z, Z+X. If any of the sums are odd, increase or decrease it by 11 (whichever operation results in a positive number less than 20; note if the sum is 9, just report this and stop the process). Finally, divide each of the sums in half. The resulting digits are A, B, C. Write a program that implements this algorithm.
*/
#include <iostream>
using namespace std;

int main(){
	int digit[3], sum[3];
	int a;
	cout << "enter a three-digit number:";
	if(!(cin>>a)){
		cout<<"not a number";return 0;
	}
	if (a >1000){
		cout<<"exceed three digits"; return 0;
	}
	for(int i=0; i<3;i++){
		digit[2-i]= a%10;
		a/=10;	
	}
	for(int i=0; i<3;i++){
		int tmp =0;
		for(int j =0; j <3 ; j++){
			tmp+=digit[(i+j)%3];
			if(j==2) break;
			tmp*=10;
		} 
		cout << tmp << endl; 
		sum[i]= tmp%11;
	}
/*
 fix warning: 'auto' type specifier is a C++11 extension [-Wc++11-extensions]
 echo "alias g++='g++ -std=c++11'" >> ~/.bashrc
 source ~/.bashrc
*/
	for(int i = 0; i < 3;i++){
		
		digit[i]= sum[i]+sum[(i+1)%3];
	}
	for (auto it = begin(digit); it != end(digit);++it){
		cout<< *it/2 << endl;
	}
	
	return 0;
}
