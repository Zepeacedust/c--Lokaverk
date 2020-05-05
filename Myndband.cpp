#include <iostream>
#include <fstream>
#include "Myndband.h"
using namespace std;
void Myndband::prenta() 
{
	cout << "Myndband:" << this->titill << ", ID: " << this->id << ", Lengd: " << this->lengd << endl;
}
Myndband::Myndband() : SafnKostur() 
{
	this->lengd = 0;
}
Myndband::Myndband(unsigned int _id, string _titill, unsigned int _lengd) : SafnKostur(_id, _titill)
{
	this->lengd = _lengd;
}
void Myndband::set_lengd(unsigned int _lengd)
{
	this->lengd = _lengd;
}
unsigned int Myndband::get_lengd()
{
	return this->lengd;
}
void Myndband::set_special(string special) 
{
	this->lengd = stoi(special);
}
void Myndband::write(string filename)
{

	ofstream file_obj;
	file_obj.open(filename);
	file_obj << "myndband" << " " << this->id << " " << this->titill << " " << this->lengd;
}
Myndband::~Myndband() {}