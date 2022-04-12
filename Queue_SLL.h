#include "SinglyLinkedList.h"

class Queue_SLL{
public:
	SinglyLinkedList* queue;

	void add(int data);

	int peek();

	void poll();

	int size();
};
