#pragma once
#include "Node.h"
class SinglyLinkedList
{
public:
	Node* head;

	//Default constructor
	SinglyLinkedList();

	//Params constructor
	SinglyLinkedList(Node* head);

	// ** SLL METHODS **

	void insertAtEnd(int n);

	void insertAtBeginning(int n);

	void insertAt(int nth, int n);

	void deleteNode(int n);

	void print();
};

