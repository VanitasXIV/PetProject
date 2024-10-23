#include "TiredState.h"
#include <iostream>
#include "hotaro.h" 


void TiredState::feed(Hotaro* hotaro) {
	std::cout << "Your Hotaro is tired and eats a little." << std::endl;
	hotaro->setHunger(hotaro->getHunger() + 5);
}

void TiredState::play(Hotaro* hotaro) {
	std::cout << "Your Hotaro is too tired to play." << std::endl;
}

void TiredState::sleep(Hotaro* hotaro) {
	std::cout << "Your Hotaro is now sleeping to regain energy." << std::endl;
	hotaro->setState(new SleepingState());
}

void TiredState::passTime(Hotaro* hotaro) {
	std::cout << "Your Hotaro gets even more tired." << std::endl;
	hotaro->setEnergy(hotaro->getEnergy() - 10);
}
