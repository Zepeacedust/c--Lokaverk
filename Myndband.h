#pragma once
#include "SafnKostur.h"
class Myndband : public SafnKostur {
protected:
	int lengd;
public:
	void prenta();
	Myndband();
	Myndband(int _id, string _titill, int _lengd);
	void set_lengd(int _lengd);
	int get_lengd();
	~Myndband();
	void set_special(string special);
};