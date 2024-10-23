#include "HungryState.h"
#include <iostream>
#include "hotaro.h"  // Ensure Hotaro is fully defined

void HungryState::feed(Hotaro* hotaro) {
	std::cout << "Your Hotaro is hungry and eats eagerly." << std::endl;
	hotaro->setHunger(hotaro->getHunger() + 20);

	if (hotaro->getHunger() > 50) {
		std::cout << "Your Hotaro is no longer hungry." << std::endl;
		hotaro->setState(new HappyState());  // Switch to HappyState
	}
}

void HungryState::play(Hotaro* hotaro) {
	std::cout << "Your Hotaro is too hungry to play." << std::endl;
}

void HungryState::sleep(Hotaro* hotaro) {
	std::cout << "Your Hotaro is too hungry to sleep well." << std::endl;
}

void HungryState::passTime(Hotaro* hotaro) {
	std::cout << "Your Hotaro becomes hungrier." << std::endl;
	hotaro->setHunger(hotaro->getHunger() - 5);
}

