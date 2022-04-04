#pragma once
#include <iostream>

class SLL_Node {
public:
	//****************
	// ** Atributes **
	//****************
	int data;
	SLL_Node* next;

	//*******************
	// ** CONSTRUCTORS **
	//*******************

	// Default constructor
	SLL_Node();

	// Params Constructor
	SLL_Node(int data);
};

