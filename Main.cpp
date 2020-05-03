#include <iostream>
#include <sstream>

#include "HashMap.h"
#include "SafnKostur.h"
#include "Timarit.h"
#include "Bok.h"
#include "Myndband.h"
#include <locale>
using namespace std;
// commands: skrá, print, breyta, eiða



int main() 
{
	setlocale(LC_ALL, "icelandic");
	HashMap bokasafn;
	bool running = true;
	while (running) 
	{
		string input;
		string command;
		getline(cin, input);
		stringstream ss;
		ss << input;
		ss >> command;
		if (command == "help") 
		{
			//todo
			cout << "skra, print, breyta, eiða" << endl;
		} else if (command == "skra") 
		{
			string type;
			ss >> type;
			if (type == "bok")
			{
				int id;
				string titill, hofundur;
				ss >> id >> titill >> hofundur;
				bokasafn.setja_i_toflu(new Bok(id, titill, hofundur));
			} else if (type == "timarit")
			{
				int id, tolublad;
				string titill;
				ss >> id >> titill >> tolublad;
				bokasafn.setja_i_toflu(new Timarit(id, titill, tolublad));
			}
			else if (type == "myndband")
			{
				int id, lengd;
				string titill;
				ss >> id >> titill >> lengd;
				bokasafn.setja_i_toflu(new Myndband(id, titill, lengd));
			}
		}
		else if (command == "eida")
		{
			int id;
			ss >> id;
			bokasafn.eida_staki(id);
		}
		else if (command == "prenta")
		{
			int id;
			ss >> id;
			bokasafn.prenta_stak(id);
		}
		else if (command == "breyta")
		{
			int id, thing;
			ss >> id >> thing;
			string change;
			ss >> change;
			cout << change << endl;
			SafnKostur* current = bokasafn.finna_stak(id)->data;
			switch (thing)
			{
			case 1:
				current->set_titill(change);
				break;
			case 2:
				current->set_special(change);
				break;
			default:
				break;
			};
		}
	}
}