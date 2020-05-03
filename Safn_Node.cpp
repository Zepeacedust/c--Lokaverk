#include "Safn_Node.h"
Safn_Node::Safn_Node() : data(nullptr), next(nullptr) {}
Safn_Node::Safn_Node(SafnKostur* data) : data(data), next(nullptr) {}
Safn_Node::~Safn_Node() 
{
	delete(this->data);
}