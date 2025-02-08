#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
	for( int i = 0; i < 5; i++){
		 horses[i] = Horse();
		 horses[i].init(i,trackLength);
	}
}

void Race::run(){
	bool keepGoing = true;
	while(keepGoing){
		for(int i = 0; i < numHorses; i++){
			horses[i].advance();
			if(horses[i].isWinner()){
				keepGoing = false;
				std::cout << "Horse " << i << " wins!" << std::endl;
				i++;
			}
			horses[i].printLane();
		}
		std::cout << "Press Enter to continue";
		std:: cin.get();
	}
}

