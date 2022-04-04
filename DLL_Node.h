#pragma once
class DLL_Node{
public:
	//****************
	// ** Atributes **
	//****************
	int data;
	DLL_Node* next;
	DLL_Node* prev;

	//*******************
	// ** CONSTRUCTORS **
	//*******************

	// Default constructor
	DLL_Node();

	// Params Constructor
	DLL_Node(int data);
};