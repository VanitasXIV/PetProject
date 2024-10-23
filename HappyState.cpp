#include "HappyState.h"
#include <iostream>
#include "hotaro.h"  // Ensure Hotaro is fully defined


void HappyState::feed(Hotaro* hotaro) {
	std::cout << "Your Hotaro is happy and enjoys the food!" << std::endl;
	hotaro->setHunger(hotaro->getHunger() + 10);
}

void HappyState::play(Hotaro* hotaro) {
	std::cout << "Your Hotaro is already happy and loves playing!" << std::endl;
	hotaro->setHappiness(hotaro->getHappiness() + 5);
}

void HappyState::sleep(Hotaro* hotaro) {
	std::cout << "Your Hotaro is happy but a bit tired." << std::endl;
//	hotaro->setState(new SleepingState());  // Switch to SleepingState
}

void HappyState::passTime(Hotaro* hotaro) {
	std::cout << "Time passes while your Hotaro is happy." << std::endl;
	hotaro->setHunger(hotaro->getHunger() - 5);
	hotaro->setEnergy(hotaro->getEnergy() - 5);
}
