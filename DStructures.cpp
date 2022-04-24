// DStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "SLL_Node.h"
#include "SinglyLinkedList.h"

#include "DLL_Node.h"
#include "DoublyLinkedList.h"

#include "Stack_SLL.h"

int main(){
	DoublyLinkedList* dll = new DoublyLinkedList();
	
	for (int i = 0; i <= 10; i++){
		dll->insertAtEnd(i);
	}

	dll->print();
	std::cout<<dll->len();
}