#pragma once
#include <String>
using namespace std;
class SafnKostur {
protected:
	int id;
	string titill;
public:
	SafnKostur();
	SafnKostur(int _id, string _titill);
	int get_id();
	void set_id(int _id);
	string get_titill();
	void set_titill(string _titill);
	virtual void prenta();
	virtual void set_special(string special);
	virtual ~SafnKostur() {}
};