#ifndef COMMAND_H
#define COMMAND_H

#include "Hotaro.h"

// Command interface for executing actions on Hotaro
class Command {
public:
	virtual void execute(Hotaro* hotaro) = 0;
	virtual ~Command() {}
};

#endif
