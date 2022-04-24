// DStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "SLL_Node.h"
#include "SinglyLinkedList.h"

#include "DLL_Node.h"
#include "DoublyLinkedList.h"

#include "Stack_SLL.h"
#include "Queue_SLL.h"

#include "BinarySearchTree.h"

int main(){
	BinarySearchTree* btree = new BinarySearchTree();
	
	for (int i = 0; i <= 10; i++){
		btree->insert(btree->root, i);
	}

	if (btree->contains(btree->root,0)) {
		std::cout << "Is in Btree";
	}
}