#pragma once
#include "SafnKostur.h"
class Bok : public SafnKostur {
protected:
	string hofundur;
public:
	void prenta();
	Bok();
	Bok(int _id, string _titill, string _hofundur);
	void set_hofundur(string _hofundur);
	string get_hofundur();
	~Bok();
	void set_special(string special);
};