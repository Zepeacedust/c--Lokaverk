#include "SafnKostur.h"
class Bok : public SafnKostur {
protected:
	string hofundur;
public:
	void prenta();
	Bok();
	Bok(int _id, string _titill, string _hofundur) : SafnKostur(_id, _titill);
	void set_hofundur(string _hofundur);
	string get_hofundur();
	~Bok();
};