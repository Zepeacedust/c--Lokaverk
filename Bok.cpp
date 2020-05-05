#include <iostream>
#include <fstream>
#include "Bok.h"
using namespace std;
void Bok::prenta()
{
	cout << "Bók: " << this->titill << ", ID: " << this->id << ", Höfundur: " << this->hofundur << endl;
}
Bok::Bok() : SafnKostur()
{
	this->hofundur = "";
}
Bok::Bok(int _id, string _titill, string _hofundur) : SafnKostur(_id, _titill)
{
	this->hofundur = _hofundur;
}
void Bok::set_hofundur(string _hofundur)
{
	this->hofundur = _hofundur;
}
string Bok::get_hofundur()
{
	return this->hofundur;
}
void Bok::set_special(string special) 
{
	this->hofundur = special;
}
void Bok::write(string filename)
{

	ofstream file_obj;
	file_obj.open(filename);
	file_obj << "bok" << " " << this->id << " " << this->titill << " " << this->hofundur;
}
Bok::~Bok() {}