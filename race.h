#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS
#include "horse.h"

class Race {
	private:
		static const int numHorses = 5;
		Horse horses[numHorses];
		const int trackLength = 15;
		
	public:
		Race();
		void run();
};
#endif