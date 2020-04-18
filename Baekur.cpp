#include <iostream>
#include "Baekur.h"
using namespace std;
void Bok::prenta()
{
	cout "Myndband:" << this->titill << ", ID: " << this->id << ", Lengd: " << this->lengd << endl;
}
Bok::Bok() : SafnKostur()
{
	this->lengd = 0;
}
Bok::Bok(int _id, string _titill, string _hofundur) : SafnKostur(_id, _titill)
{
	this->hofundur = _hofundur
}
void Bok::set_lengd(int _lengd)
{
	this->lengd = _lengd;
}
int Bok::get_lengd()
{
	return this->lengd;
}
Bok::~Myndband();