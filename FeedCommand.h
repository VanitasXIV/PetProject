#ifndef FEEDCOMMAND_H
#define FEEDCOMMAND_H

#include "Command.h"
#include <iostream>

class FeedCommand : public Command {
public:
	void execute(Hotaro* hotaro) override {
		std::cout << "Executing Feed Command..." << std::endl;
		hotaro->feed();  // Call feed action on Hotaro
	}
};

#endif
