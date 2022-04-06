// DStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "SLL_Node.h"
#include "SinglyLinkedList.h"

#include "DLL_Node.h"
#include "DoubleLinkedList.h"

#include "Stack_SLL.h"

int main(){
	Stack_SLL* s = new Stack_SLL();
	
	for (int i = 0; i <= 10; i++){
		s->push(i);
	}

	s->print();
	s->pop();
	s->pop();

	s->print();
	std::cout<<s->size();
}