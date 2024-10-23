#include "DeadState.h"
#include <iostream>

void DeadState::feed(Hotaro* hotaro) {
	std::cout << "Your Hotaro is dead and cannot be fed." << std::endl;
}

void DeadState::play(Hotaro* hotaro) {
	std::cout << "Your Hotaro is dead and cannot play." << std::endl;
}

void DeadState::sleep(Hotaro* hotaro) {
	std::cout << "Your Hotaro is dead and cannot sleep." << std::endl;
}

void DeadState::passTime(Hotaro* hotaro) {
	std::cout << "Your Hotaro is dead. Time has no meaning." << std::endl;
}

