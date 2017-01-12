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

void StartUp(){
	cout << "Welcome to Artillery.\nYou are in the middle of a war and being charged by thousands of enemies.\n"
	<<"You have one cannon, which you can shoot at any angle.\nYou only have 10 cannonballs for this target..\n"<<
	"Let\'s begin...\n";
}   


bool hit(int dist, float in_angle){

	// in_angle is the angle the player has entered, converted to radians.
	double time_in_air = (2.0 * velocity * sin(in_angle)) / gravity;
	int distance = round((velocity * cos(in_angle)) * time_in_air);
	if (distance == dist){ 
		cout<<"You hit him!!!\n";
		return true;
	}else if(distance < dist){
		cout<<"You under shot by "<<dist-distance<<endl;
	}else if(distance > dist){
		cout<<"You over shot by "<<distance-dist<<endl;
	}
	return false;
}

int Fire(){
	float guess;
	int enemy = rand() % 1000+1;
	cout << "The enemy is "<< enemy << " feet away!!!\n";
	while(1){
		cout<<"What angle?";
		cin >> guess;
		if(hit(enemy,guess)) break;
	}			
	
	return 1;
	
}

int main(){
	char done;
	StartUp();
	int killed = 0;
        srand (time(NULL));
	do {
		killed += Fire(); // Fire() contains the main loop of each round.
  		cout << "I see another one, care to shoot again? (Y/N) " << endl;
  		cin >> done;
	} while (done != 'n');
	cout << "You killed " << killed << " of the enemy." << endl;

	return 0;
}
