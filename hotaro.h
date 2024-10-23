#ifndef HOTARO_H
#define HOTARO_H

#include "HotaroState.h"

class Hotaro {
	private:
		HotaroState* state; //Pointer to current state
		int hunger;
		int happiness;
		int energy;
		int age;
		int actionCounter;
		void passTime();
		void randomEvent();
		void checkHealth();

	public:
		Hotaro(HotaroState* initialState); //Constructor
		//Setters and getters
		int getHunger() const;
		void setHunger(int hunger);
		int getHappiness() const;
		void setHappiness(int happiness);
		int getEnergy() const;
		void setEnergy(int energy);
		int getAge() const;
		void setState(HotaroState* newState);
		
		void displayStatus();
		//User functions called by command classes
		
		void feed();
		void play();
		void sleep();
		void clean();
		

};

#endif
