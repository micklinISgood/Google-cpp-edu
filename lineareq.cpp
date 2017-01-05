#include <iostream>
#include <iomanip>
using namespace std;

/*
Horses cost $10, pigs cost $3, and rabbits are only $0.50. 
A farmer buys 100 animals for $100, How many of each animal did he buy? 
*/

int main()
{
	
	/*
	x + y + z =100
	10x + 3y + 0.5z = 100
	100≥ x ≥ 0,100≥ y ≥ 0, 100≥ z ≥ 0
	*/ 
	int z;

	for(int x =0; x <=100; x++){
		for(int y =0; y <=100; y++){
			z = 100 - x - y;
			if(10*x + 3*y + 0.5*z == 100.0){
				cout <<"A farmer buys 100 animals for $100, How many of each animal did he buy? "<<endl;
				cout << x << " horses," << y << " pigs, "<< z << " rabbits"<<endl; 
				return 0;
			}
		}
		// for(int j=0; j <4; j++)cout << setw(17)<<"Hello World!";
		// cout << endl;
	}
	return 0;
}
int googleSol () {

  for (int h = 0; h < 100; h++)
    for (int p = 0; p < 100; p++)
      for (int r = 0; r < 100; r++)
        if ((h + p + r) == 100)
          if (((10 * h) + (3 * p) + (0.5 * r)) == 100)
            cout << "Found one! " << h << " horses " << p << " pigs " << r << " rabbits "  << endl;
   return 0;
}
   
