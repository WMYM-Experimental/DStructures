#pragma once
#include "Node.h"
class SinglyLinkedList{
private:

	// Atributes
	Node* head;

public:
	// ** CONSTRUCTORS **

	// Default constructor
	SinglyLinkedList();

	// Params constructor
	SinglyLinkedList(Node* head);

	// ** SLL METHODS **

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

	void reverse_R(Node* currentNode);

	// Print
	void print();
};

