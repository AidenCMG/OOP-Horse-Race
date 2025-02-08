#include "horse.h"
#include <iostream>
#include <random>

Horse::Horse(){
	position = 0;
	trackLength = 15;
	id = 0;
}

void Horse::init(int id, int trackLength){
	Horse::id = id;
	Horse::trackLength = trackLength;
}

void Horse::advance(){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0,1);
	int coin = dist(rd);
	if(coin == 1){
		position++;
	}
}	
void Horse::printLane(){
	for(int i = 0; i < 15; i++){
		if(position != i){
			std::cout << ".";
		}
		else{
			std::cout << id;
		}
	}
	std::cout << std::endl;
}

bool Horse::isWinner(){
	if(position == trackLength){
		return true;
	}
	else{
		return false;
	}
}
