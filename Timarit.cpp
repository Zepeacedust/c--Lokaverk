#include <iostream>
#include "Timarit.h"
using namespace std;
void Timarit::prenta()
{
	cout "Myndband:" << this->titill << ", ID: " << this->id << ", Lengd: " << this->lengd << endl;
}
Timarit::Timarit() : SafnKostur()
{
	this->lengd = 0;
}
Timarit::Timarit(int _id, string _titill, int _tolublad) : SafnKostur(_id, _titill)
{
	this->lengd = _tolublad
}
void Timarit::set_tolublad(int _tolublad)
{
	this->tolublad = _tolublad;
}
int Timarit::get_tolublad()
{
	return this->tolublad;
}
Timarit::~Timarit();