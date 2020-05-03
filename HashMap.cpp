#include "HashMap.h"


HashMap::HashMap() : size(8) { this->taflan = new Safn_Node * [this->size](); }
HashMap::HashMap(int _size) : size(_size) { this->taflan = new Safn_Node * [this->size](); }


int HashMap::hash(SafnKostur* data) { return data->get_id() % this->size; }
int HashMap::hash(int data) { return data % this->size; }


void HashMap::setja_i_toflu(SafnKostur* data) {

	int bucket_id = this->hash(data);
	if (this->taflan[bucket_id] == nullptr)
		this->taflan[bucket_id] = new Safn_Node(data);
	else {
		Safn_Node* current = this->taflan[bucket_id];
		while (current->next != nullptr)
			current = current->next;
		current->next = new Safn_Node(data);
	}
}

void HashMap::eida_staki(int id) 
{
	int bucket_id = this->hash(id);

	Safn_Node* current = this->taflan[bucket_id];

	if (current == nullptr) { return; }
	while (current->next != nullptr && current->next->data->get_id() == id)
		current = current->next;
	Safn_Node* temp = current->next;
	delete(current->next);
	current->next = temp;
		
}



Safn_Node* HashMap::finna_stak(int id) {

	int bucket_id = this->hash(id);

	Safn_Node* current = this->taflan[bucket_id];

	while (current && current->data->get_id() != id)
		current = current->next;
	if (current != nullptr && current->data->get_id() == id)
		return current;
	return nullptr;
}


void HashMap::prenta_stak(int id) 
{
	this->finna_stak(id)->data->prenta();
}