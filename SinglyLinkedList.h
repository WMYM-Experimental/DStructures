#pragma once
#include "SLL_Node.h"

class SinglyLinkedList{
public:
	//****************
	// ** Atributes **
	//****************
	SLL_Node* head;

	//*******************
	// ** CONSTRUCTORS **
	//*******************

	// Default constructor
	SinglyLinkedList();

	// Params constructor
	SinglyLinkedList(SLL_Node* head);

	//******************
	// ** SLL METHODS **
	//******************

	// Lenght
	int len();

	// Insert
	void insertAtEnd(int n);

	void insertAtBeginning(int n);

	void insert(int v, int nth);

	// Delete
	void deleteFirst();

	void deleteAt(int nth);

	void deleteAtEnd();

	int peek();

	// Reverse
	void reverse_I();

	SLL_Node* reverse_R(SLL_Node* currentNode);

	// Search
	int search_I(int k);

	// Prints - Type of prints 
	void print();

	void reversePrint_R(SLL_Node* node);

	void print_R(SLL_Node* node);
};

