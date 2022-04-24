#pragma once
#include "DLL_Node.h"

class DoublyLinkedList{
public:
	//****************
	// ** Atributes **
	//****************
	DLL_Node* head;

	// Default constructor
	DoublyLinkedList();

	// Params constructor
	DoublyLinkedList(DLL_Node* head);

	//******************
	// ** DLL METHODS **
	//******************

	// Lenght
	int len();

	// Insert
	void insertAtEnd(int n);

	void insertAtBeginning(int n);

	void insert(int v, int nth);

	// Delete
	void deleteFirst();

	void deleteEnd();

	void deleteAt(int nth);

	// Reverse
	void reverse_I();

	DLL_Node* reverse_R(DLL_Node* currentNode);

	// Search
	int search_I(int k);

	// Prints - Type of prints 
	void print();

	void reversePrint_R(DLL_Node* node);

	void print_R(DLL_Node* node);
};

