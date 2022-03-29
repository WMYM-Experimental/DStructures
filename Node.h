#pragma once
#include <iostream>

class Node {
public:
	//****************
	// ** Atributes **
	//****************
	int data;
	Node* next;

	//*******************
	// ** CONSTRUCTORS **
	//*******************

	// Default constructor
	Node();

	// Params Constructor
	Node(int data);
};

