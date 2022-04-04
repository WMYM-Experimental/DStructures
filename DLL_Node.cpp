#include <iostream>
#include "DLL_Node.h"

DLL_Node::DLL_Node(){
	this->data = 0;
	this->next = NULL;
	this->prev = NULL;
}

DLL_Node::DLL_Node(int data){
	this->data = data;
	this->next = NULL;
	this->prev = NULL;
}
