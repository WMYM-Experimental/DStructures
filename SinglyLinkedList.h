#pragma once
#include "Node.h"
class SinglyLinkedList{
public:
	//****************
	// ** Atributes **
	//****************
	Node* head;

	//*******************
	// ** CONSTRUCTORS **
	//*******************

	// Default constructor
	SinglyLinkedList();

	// Params constructor
	SinglyLinkedList(Node* head);

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

	// Reverse
	void reverse_I();

	Node* reverse_R(Node* currentNode);

	// Search
	int search_I(int k);

	// Prints - Type of prints 
	void print();

	void reversePrint_R(Node* node);

	void print_R(Node* node);
};

