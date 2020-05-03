#include "SafnKostur.h"
class Timarit : public SafnKostur {
protected:
	int tolublad;
public:
	void prenta();
	Timarit();
	Timarit(int _id, string _titill, int _tolublad);
	void set_tolublad(int _tolublad);
	int get_tolublad();
	~Timarit();
	void set_special(string special); 
};