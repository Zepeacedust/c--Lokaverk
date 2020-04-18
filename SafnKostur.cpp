#include <iostream>
#include "SafnKostur.h"

using namespace std;
Safnkostur::SafnKostur() 
{
	id = 0;
	titill = "NULL";
}
Safnkostur::SafnKostur(int _id, string _titill) 
{
	this->id = _id;
	this->titill = _titill;
}

int	SafnKostur::get_id() 
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
virtual	void SafnKostur::prenta() 
{
	cout << "SafnKostur: " << this->titill << ", ID: " << this->id << endl;
}