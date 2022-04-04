// DStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "SLL_Node.h"
#include "SinglyLinkedList.h"

#include "DLL_Node.h"
#include "DoubleLinkedList.h"

int main(){
	SinglyLinkedList* ll = new SinglyLinkedList();
	
	for (int i = 0; i <= 10; i++){
		ll->insert(i*3, i);
	}

	// std::cout << ll->search_I(2);
	ll->print();
	std::cout << ll->search_I(3)<<std::endl;
	std::cout<<ll->len();
}