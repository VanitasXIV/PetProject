#include "SleepingState.h"
#include <iostream>
#include "hotaro.h"  // Ensure Hotaro is fully defined


void SleepingState::feed(Hotaro* hotaro) {
	std::cout << "Your Hotaro is sleeping and cannot eat." << std::endl;
}

void SleepingState::play(Hotaro* hotaro) {
	std::cout << "Your Hotaro is sleeping and cannot play." << std::endl;
}

void SleepingState::sleep(Hotaro* hotaro) {
	std::cout << "Your Hotaro is already sleeping." << std::endl;
}

void SleepingState::passTime(Hotaro* hotaro) {
	std::cout << "Time passes while your Hotaro sleeps." << std::endl;
	hotaro->setEnergy(hotaro->getEnergy() + 10);

	if (hotaro->getEnergy() >= 50) {
		std::cout << "Your Hotaro has finished sleeping and is now happy!" << std::endl;
		hotaro->setState(new HappyState());  // Switch to HappyState
	}
}
