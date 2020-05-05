#include <iostream>
#include <sstream>
#include <fstream>


#include "HashMap.h"
#include "SafnKostur.h"
#include "Timarit.h"
#include "Bok.h"
#include "Myndband.h"
#include <locale>
#include "main.h"
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
			string query;
			ss >> query;
			if (query == "") 
			{
				cout << "skipannir skra, eida, prenta, breyta, write, read, help" << endl << "help [Skipun] til að sjá meira um skipun" << endl;
			}
			else if (query == "skra") { cout << "skra [Type] [Id] [Titill] [Special]: Bætir staki þeð þessa eigileika í bókasafnið" << endl; }
			else if (query == "eida") { cout << "eida [id]: eida staki úr Bókasafni með gefið id" << endl; }
			else if (query == "prenta") { cout << "prenta [id]: finna og prenta stak með id í bókasafni" << endl; }
			else if (query == "breyta") { cout << "breyta [id] [thing] [breyting]: breyta titil(thing = 1) eða Special(thing = 2) í [breyting]. special er sérstaki variable undirklasana" << endl; }
			else if (query == "write") { cout << "write [id] [filename]: skrifa hlut með [id] í file með [filename], overwritar file  ef það er til fyrir" << endl; }
			else if (query == "read") { cout << "read [filename]: bætir staki í bókasafn eftir [filename]" << endl; }
			else if (query == "help") { cout << "help [query](optional): skrifar allar skipannir ef ekkert query er gefið, annars gefa lýsingu á query," << endl; }
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
			else
			{
				cout << "Type ekki þekkt, vinsamlegast reyndu aftur" << endl;
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
		else if (command == "write")
		{
			cout << "reeeeee" << endl;
			int id;
			ss >> id;
			string filename;
			ss >> filename;
			SafnKostur* current = bokasafn.finna_stak(id)->data;
			current->prenta();

			current->write(filename);

		}
		else if (command == "read") 
		{
			string filename;
			ss >> filename;
			ifstream inp;
			int id;
			string type, titill, special;
			inp.open(filename);
			inp >> type >> id >> titill >> special;
			cout << type << id << titill << special;
			if (type == "bok")
			{
				bokasafn.setja_i_toflu(new Bok(id, titill, special));
			}
			else if (type == "timarit")
			{
				bokasafn.setja_i_toflu(new Timarit(id, titill, stoi(special)));
			}
			else if (type == "myndband")
			{
				bokasafn.setja_i_toflu(new Myndband(id, titill, stoi(special)));
			}
			else 
			{
				cout << "Type ekki þekkt, vinsamlegast reyndu aftur" << endl;
			}
		}
	}
}
