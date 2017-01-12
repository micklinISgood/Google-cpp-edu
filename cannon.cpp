/*
Welcome to Artillery.
You are in the middle of a war and being charged by thousands of enemies.
You have one cannon, which you can shoot at any angle.
You only have 10 cannonballs for this target..
Let's begin...

The enemy is 507 feet away!!!
What angle? 25<
You over shot by 445
What angle? 15
You over shot by 114
What angle? 10
You under shot by 82
What angle? 12
You under shot by 2
What angle? 12.01
You hit him!!!
It took you 4 shots.
You have killed 1 enemy.
I see another one, are you ready? (Y/N) n

You killed 1 of the enemy.

*/

#include <iostream>
#include <stdlib.h> // srand
#include <time.h>
#include <math.h> // sin ,cos
using namespace std;

// constants
#define velocity 200.0  
#define gravity 32.2
const int kNumShells = 10;  // allowed 10 shells per target
const int kMinDist = 200;  // min distance for a target
const int kMaxDist = 900;  // max distance for a target
const double kPi = 3.1415;

void StartUp(){
	cout << "Welcome to Artillery.\nYou are in the middle of a war and being charged by thousands of enemies.\n"
	<<"You have one cannon, which you can shoot at any angle.\nYou only have 10 cannonballs for this target..\n"<<
	"Let\'s begin...\n";
}   

int init_enemy(){
	srand (time(NULL));
	int dist = rand() % kMaxDist +kMinDist;
	cout << "The enemy is "<< dist << " feet away!!!\n";
	return dist;
	
}
int checkshot(){

	double in_angle;
	cout<<"What angle? " << endl;
	if(!(cin>>in_angle)) return -1;
	 // Convert to radians.
	in_angle = (in_angle*kPi)/180.0;
	// in_angle is the angle the player has entered, converted to radians.
	double time_in_air = (2.0 * velocity * sin(in_angle)) / gravity;
	return (int) round((velocity * cos(in_angle)) * time_in_air);
}

int Fire(){
	float guess;
	int target = init_enemy();
	int shots = kNumShells; 
	while(shots-- > 0){

		int dist = checkshot();
		if(abs(dist-target)<=1){
			cout <<"You hit him!!!\n";
			cout <<"It took you "<< kNumShells-shots << " shots." << endl;
			return 1;
		}else{
			if(target < dist){
				cout<<"You under shot by "<<dist-target<<endl;
			}else{
				cout<<"You over shot by "<<target-dist<<endl;
			}
		
		}			
	}
  	cout << "You have run out of ammo..." << endl;
	return 0;
	
}

int main(){
	char done;
	StartUp();
	int killed = 0;
	do {
		killed += Fire(); // Fire() contains the main loop of each round.
		cout << "You have killed " << killed << " of the enemy." << endl;
  		cout << "I see another one, care to shoot again? (Y/N) " << endl;
  		cin >> done;
	} while (done != 'n');
	cout << "You killed " << killed << " of the enemy." << endl;

	return 0;
}
