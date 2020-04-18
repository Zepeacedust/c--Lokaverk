#include "SafnKostur.h"
class Timarit : public SafnKostur {
protected:
	int tolublad;
public:
	void prenta();
	Timarit();
	Timarit(int _id, string _titill, int _tolublad) :SafnKostur(_id, _titill);
	void set_tolublad(int _tolublad);
	int get_tolublad();
	~Timarit();
};