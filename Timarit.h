#include "SafnKostur.h"
class Timarit : public SafnKostur {
protected:
	unsigned int tolublad;
public:
	void prenta();
	Timarit();
	Timarit(int _id, string _titill, int _tolublad);
	void set_tolublad(unsigned int _tolublad);
	unsigned int get_tolublad();
	~Timarit();
	void set_special(string special); 
	void write(string filename);
};