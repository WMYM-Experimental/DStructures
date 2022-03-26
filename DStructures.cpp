// DStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "SinglyLinkedList.h"

int main()
{
	/*
	Node* n1 = new Node(1);
	Node* n2 = new Node(2);
	Node* n3 = new Node(3);
	Node* n4 = new Node(4);
	*/

	SinglyLinkedList* list = new SinglyLinkedList();
	list->print();

	list->insertAtEnd(2);
	list->insertAtEnd(2);
	list->insertAtEnd(3);
	list->insertAtEnd(12);

	list->print();
	list->insertAtBeginning(0);
	list->print();

	std::cout << list->head->data;
}