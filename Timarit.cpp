#include <iostream>
#include <fstream>
#include "Timarit.h"
using namespace std;
void Timarit::prenta()
{
	cout << "T�marit : " << this->titill << ", ID: " << this->id << ", t�lubla�: " << this->tolublad << endl;
}
Timarit::Timarit() : SafnKostur()
{
	this->tolublad = 0;
}
Timarit::Timarit(int _id, string _titill, int _tolublad) : SafnKostur(_id, _titill)
{
	this->tolublad = _tolublad;
}
void Timarit::set_tolublad(unsigned int _tolublad)
{
	this->tolublad = _tolublad;
}
unsigned int Timarit::get_tolublad()
{
	return this->tolublad;
}
void Timarit::set_special(string special) 
{
	this->tolublad = stoi(special);
}
void Timarit::write(string filename) 
{

	ofstream file_obj;
	file_obj.open(filename);
	file_obj << "timarit" << " " << this->id << " " << this->titill << " " << this->tolublad;
}
Timarit::~Timarit() {}