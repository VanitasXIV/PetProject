#ifndef DEADSTATE_H
#define DEADSTATE_H

#include "HotaroState.h"

class DeadState : public HotaroState {
public:
	virtual void feed(Hotaro* hotaro) override;
	virtual void play(Hotaro* hotaro) override;
	virtual void sleep(Hotaro* hotaro) override;
	virtual void passTime(Hotaro* hotaro) override;
};

#endif
