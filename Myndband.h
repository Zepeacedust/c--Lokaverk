#pragma once
#include "SafnKostur.h"
class Myndband : public SafnKostur {
protected:
	unsigned int lengd;
public:
	void prenta();
	Myndband();
	Myndband(unsigned int _id, string _titill, unsigned int _lengd);
	void set_lengd(unsigned int _lengd);
	unsigned int get_lengd();
	~Myndband();
	void set_special(string special);
	void write(string filename);
};