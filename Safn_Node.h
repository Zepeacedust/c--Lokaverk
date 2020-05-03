#pragma once
#include "SafnKostur.h"
struct Safn_Node {
	SafnKostur* data;
	Safn_Node* next;
	Safn_Node();
	Safn_Node(SafnKostur* data);
	~Safn_Node();
};
