#include "Node.h"

// Default Constructor
Node::Node() {
	this->data = 0;
	this->next = NULL;
}

// Params Constructor
Node::Node(int data) {
	this->data = data;
	this->next = NULL;
}