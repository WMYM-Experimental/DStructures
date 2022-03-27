#pragma once
#include "Node.h"
class SinglyLinkedList{
public:
	// Atributes
	Node* head;

	// ** CONSTRUCTORS **

	// Default constructor
	SinglyLinkedList();

	// Params constructor
	SinglyLinkedList(Node* head);

	// ** SLL METHODS **

	int len();

	void insertAtEnd(int n);

	void insertAtBeginning(int n);

	void insert(int v, int nth);

	void deleteFirst();

	void deleteAt(int nth);

	void print();
};

