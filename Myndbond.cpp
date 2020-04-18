#include <iostream>
#include "Myndbond.h"
using namespace std;
void Myndband::prenta() 
{
	cout "Myndband:" << this->titill << ", ID: " << this->id << ", Lengd: " << this->lengd << endl;
}
Myndband::Myndband() : SafnKostur() 
{
	this->lengd = 0;
}
Myndband::Myndband(int _id, string _titill, int _lengd) : SafnKostur(_id, _titill) 
{
	this->lengd = _lengd
}
void Myndband::set_lengd(int _lengd) 
{
	this->lengd = _lengd;
}
int Myndband::get_lengd()
{
	return this->lengd;
}
Myndband::~Myndband();