#include "hotaro.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "HappyState.h"


using namespace std;

Hotaro::Hotaro(HotaroState* initialState)
	: state(initialState), hunger(50), happiness(50), energy(50), age(0), actionCounter(0) {
	srand(time(0)); //random seed for events
}

// Getter and setter implementations

// Getters
int Hotaro::getHunger() const {
	return hunger;  // Returns the current hunger value
}

int Hotaro::getHappiness() const {
	return happiness;  // Returns the current happiness value
}

int Hotaro::getEnergy() const {
	return energy;  // Returns the current energy value
}

int Hotaro::getAge() const {
	return age;  // Returns the current age value
}

// Setters
void Hotaro::setHunger(int h) {
	if (h < 0) {
		hunger = 0;  // Ensure hunger doesn't go below 0
	}
	else if (h > 100) {
		hunger = 100;  // Ensure hunger doesn't exceed 100
	}
	else {
		hunger = h;  // Set hunger to the provided value
	}
}

void Hotaro::setHappiness(int h) {
	if (h < 0) {
		happiness = 0;  // Ensure happiness doesn't go below 0
	}
	else if (h > 100) {
		happiness = 100;  // Ensure happiness doesn't exceed 100
	}
	else {
		happiness = h;  // Set happiness to the provided value
	}
}

void Hotaro::setEnergy(int e) {
	if (e < 0) {
		energy = 0;  // Ensure energy doesn't go below 0
	}
	else if (e > 100) {
		energy = 100;  // Ensure energy doesn't exceed 100
	}
	else {
		energy = e;  // Set energy to the provided value
	}
}

void Hotaro::setState(HotaroState* newState) {
	state = newState;  // Set the current state to the new state
}

//Random events (20% rng of happening)
void Hotaro::randomEvent() {
	int event = rand() % 3; // randomizer between 0 and 2
	switch (event) {
	case 0:
		cout << "Your Hotaro caught a cold." << endl;
		setEnergy(getEnergy() - 10);
		break;
	case 1:
		cout << "Your Hotaro found a toy and is happier!" << endl;
		setHappiness(getHappiness() + 10);
		break;
	case 2:
		cout << "Your Hotaro feels a bit tired." << endl;
		setEnergy(getEnergy()-5);
		break;
	}
	checkHealth();

}

void Hotaro::checkHealth() {
	if (getHunger() <= 0 || getEnergy() <= 0 || getHappiness() <= 0) {
		cout << "Your Hotaro has passed away due to poor health." << endl;
		setState(new DeadState());
	}
	else if (getHunger() < 30) {
		setState(new HungryState());
	}
	else if (getEnergy() < 30) {
		setState(new TiredState());
	}
	else if (getHappiness() < 30) {
		setState(new SadState()); //TODO: Sad state
	}
	else {
		setState(new HappyState());
	}
}

//Automatically manage time passing with each action
void Hotaro::passTime() {
	state->passTime(this);
	checkHealth();
}

// Displays Hotaro's current status
void Hotaro::displayStatus() {
	cout << "Hunger: " << getHunger() << endl;
	cout << "Happiness: " << getHappiness() << endl;
	cout << "Energy: " << getEnergy() << endl;
	cout << "Age: " << getAge() << endl;

}




// Commands - Each command will be executed by specific command objects
void Hotaro::feed() {
	state->feed(this); // Delegate to the current state's feed method
}

void Hotaro::play() {
	state->play(this); // Delegate to the current state's play method
}

void Hotaro::sleep() {
	state->sleep(this); // Delegate to the current state's sleep method
}

void Hotaro::clean() {
	state->clean(this);
}