#pragma once
#include "Safn_Node.h"
class HashMap {
private:

	Safn_Node** taflan;
	int size;

public:

	HashMap();
	HashMap(int _size);

	int hash(SafnKostur* data);
	int hash(int data);


	void setja_i_toflu(SafnKostur* data);
	Safn_Node* finna_stak(int id);
	void prenta_stak(int id);
	void eida_staki(int id);


};