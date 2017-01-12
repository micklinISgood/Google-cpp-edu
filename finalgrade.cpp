/***
Write a program that will compute your final grade for a programming course you are taking. Here is the grading scheme:
Final grades will be based on the following:
40% Assignments   15% Midterm Examination
35% Final Examination
10% Class Participation Grade 
Your program should ask the user for the four assignment scores, the midterm, final and section grades. Then, the final score is calculated and printed. To do the calculations, you average the four assignment scores together and then multiply it by 0.4 (40%). You then multiply the midterm score by 0.15, the final by 0.35 and the participation grade by 0.1. Then you add all the results of these multiplications together.

Use functions wherever you can in this program. You can create a function to get the input by passing in as a parameter the string to be displayed in an explanatory cout. Here is an example run:

Enter the score for the first assignment. 75
Enter the score for the second assignment. 85
Enter the score for the third assignment. 82
Enter the score for the fourth assignment. 94
Enter the score for the midterm. 81
Enter the score for the final. 89
Enter the score for the section grade. 100
The final grade is: 86.9
***/
#include <iostream>
using namespace std;

int main(){
	int _1=0, _2=0, _3=0,_4 =0, mid=0,final =0,part=0;
 
	cout << "Enter the score for the first assignment."<<endl;
        // parenthese cin >> _1
	if(!(cin>> _1)) {
		cout << "Not a number" << endl;
		return 0;
	}
	cout << "Enter the score for the second assignment."<<endl;

	if(!(cin>> _2)) {
		cout << "Not a number" << endl;
		return 0;
	}

	cout << "Enter the score for the third assignment."<<endl;

	if(!(cin>> _3)) {
		cout << "Not a number" << endl;
		return 0;
	}
	cout << "Enter the score for the forth assignment."<<endl;

	if(!(cin>> _4)) {
		cout << "Not a number" << endl;
		return 0;
	}
	cout << "Enter the score for the midterm."<<endl;

	if(!(cin>> mid)) {
		cout << "Not a number" << endl;
		return 0;
	}

	cout << "Enter the score for the final."<<endl;

	if(!(cin>> final)) {
		cout << "Not a number" << endl;
		return 0;
	}
	cout << "Enter the score for the section grade."<<endl;

	if(!(cin>> part)) {
		cout << "Not a number" << endl;
		return 0;
	}
	cout<<"The final grade is:" << (double) (_1+_2+_3+_4)/4*0.4+mid*0.15+final*0.35+part*0.1<<endl;


	
	return 0;
}
