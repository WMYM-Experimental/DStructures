// DStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "SLL_Node.h"
#include "SinglyLinkedList.h"

#include "DLL_Node.h"
#include "DoubleLinkedList.h"

int main(){
	SinglyLinkedList* sll = new SinglyLinkedList();
	DoubleLinkedList* dll = new DoubleLinkedList();
	
	for (int i = 0; i <= 10; i++){
		dll->insertAtEnd(i);
	}

	// std::cout << ll->search_I(2);
	dll->print();
	std::cout<<dll->len();
}