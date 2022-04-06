#pragma once
#include "SLL_Node.h"
#include "SinglyLinkedList.h"

class Stack_SLL{
public:
	SinglyLinkedList* stk;

	Stack_SLL();

	void push(int data);

	void pop(); // TODO: RETURN ELIMINATED NODE

	int peek();

	bool empty();

	int size();

	void print();

	void reversePrint();
};

