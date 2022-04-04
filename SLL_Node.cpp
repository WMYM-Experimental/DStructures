#include "SLL_Node.h"

// Default Constructor
SLL_Node::SLL_Node() {
	this->data = 0;
	this->next = NULL;
}

// Params Constructor
SLL_Node::SLL_Node(int data) {
	this->data = data;
	this->next = NULL;
}