/*
The law requires that food product manufacturers place expiration dates on their products, but there is a loophole in the law: it does not require the expiration date to be in any particular form. So, it can be written in Swahili and still be legal.
Ralph Nader's third cousin, Nadine is a self-appointed Food Quality Spy. She has learned that many food product manufacturers have started encoding the product expiration dates to keep customers from knowing how old the stuff is.

But the encoding does allow grocers to figure out the expiration dates if for some reason, they want to.

One popular encoding method:

encode the months from Jan to Dec as 'A' through 'L'
encode each digit of the date as 'Q' through 'Z'
encode the year as 'A' through 'Z' meaning 1 through 26 which is then added to 1995.
Nadine found a particularly questionable loaf of bread with this date: ARZM. Write a program to determine the date.
*/

#include <iostream>
using namespace std;

int main(){
	char loophole[] = "ARZM";
	/*
Doing sizeof( myArray ) will get you the total number of bytes allocated for that array. You can then find out the number of elements in the array by dividing by the size of one element in the array: sizeof( myArray[0] ) myArray[0] == * myArray
	*/
	// loophole[len] == '\0'
	int len = sizeof(loophole)/sizeof(*loophole)-1;
	for(int i =0; i < len; i ++){
		if(i==0){
			switch(loophole[i]-'A'){
				case 0:
					cout << "Jan ";
					break;
				case 1:
					cout << "Feb ";
					break;
				case 2:
					cout << "Mar ";
					break;
				case 3:
					cout << "Apr ";
					break;
				case 4:
					cout << "May ";
					break;
				case 5:
					cout << "Jun ";
					break;
				case 6:
					cout << "Jul ";
					break;
				case 7:
					cout << "Aug ";
					break;
				case 8:
					cout << "Sep ";
					break;
				case 9:
					cout << "Oct ";
					break;
				case 10:
					cout << "Nov ";
					break;
				case 11:
					cout << "Dec ";
					break;
			}	
		}else if (i == len -1){
			cout <<" "<<(int)(loophole[i]-'A')+1996 << endl;
		}else{

			cout << loophole[i]-'Q';
		}

		
	}
	
	return 0;

}
