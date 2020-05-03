#include <iostream>
#include "Timarit.h"
using namespace std;
void Timarit::prenta()
{
	cout << "Tímarit : " << this->titill << ", ID: " << this->id << ", tölublað: " << this->tolublad << endl;
}
Timarit::Timarit() : SafnKostur()
{
	this->tolublad = 0;
}
Timarit::Timarit(int _id, string _titill, int _tolublad) : SafnKostur(_id, _titill)
{
	this->tolublad = _tolublad;
}
void Timarit::set_tolublad(int _tolublad)
{
	this->tolublad = _tolublad;
}
int Timarit::get_tolublad()
{
	return this->tolublad;
}
void Timarit::set_special(string special) 
{
	this->tolublad = stoi(special);
}
Timarit::~Timarit() {}