#ifndef HOTAROSTATE_H
#define HOTAROSTATE_H

class Hotaro; //Fwd declaration

class HotaroState {
public:
	virtual ~HotaroState() {}
	virtual void feed(Hotaro* hotaro) = 0;
	virtual void play(Hotaro* hotaro) = 0;
	virtual void sleep(Hotaro* hotaro) = 0;
	virtual void clean(Hotaro* hotaro) = 0;
	virtual void passTime(Hotaro* hotaro) = 0;
};

#endif
