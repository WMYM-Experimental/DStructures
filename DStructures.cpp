// DStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "SinglyLinkedList.h"

int main(){
	SinglyLinkedList* list = new SinglyLinkedList();
	for (int i = 0; i <= 10; i++){
		list->insert(i, i);
	}
	list->reverse_I();
	list->print();
	list->print_R(list->head);
	list->reversePrint_R(list->head);
	list->reverse_R(list->head);
	list->print();


	std::cout<<list->len();
}