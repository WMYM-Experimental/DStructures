// DStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "SinglyLinkedList.h"

int main(){
	SinglyLinkedList* list = new SinglyLinkedList();
	list->insert(1, 1);

	list->deleteAt(list->len());
	list->print();


	std::cout<<list->len();
}