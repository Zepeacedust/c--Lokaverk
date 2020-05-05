#include <iostream>
#include "SafnKostur.h"

using namespace std;
SafnKostur::SafnKostur()
{
	this->id = 0;
	this->titill = "NULL";
}

SafnKostur::SafnKostur(unsigned int _id, string _titill)
{
	this->id = _id;
	this->titill = _titill;
}

unsigned int SafnKostur::get_id()
{
	return this->id;
}
void SafnKostur::set_id(int _id) 
{
	this->id = _id;
}

string SafnKostur::get_titill() 
{
	return this->titill;
}
void SafnKostur::set_titill(string _titill) 
{
	this->titill = _titill;
}
void SafnKostur::prenta() 
{
	cout << "SafnKostur: " << this->titill << ", ID: " << this->id << endl;
}
void SafnKostur::set_special(string special) 
{
	cout << "ekki got, segðu Arnóri ef þetta gerist" << endl;
}

void SafnKostur::write(string filename)
{
	cout << "ekki got, segðu Arnóri ef þetta gerist" << endl;
}
