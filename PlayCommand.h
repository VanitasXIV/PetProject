#ifndef PLAYCOMMAND_H
#define PLAYCOMMAND_H

#include "Command.h"
#include <iostream>

class PlayCommand : public Command {
public:
	void execute(Hotaro* hotaro) override {
		std::cout << "Executing Play Command..." << std::endl;
		hotaro->play();  // Call play action on Hotaro
	}
};

#endif
