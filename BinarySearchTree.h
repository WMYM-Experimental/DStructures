#pragma once
#include "BST_Node.h"

class BinarySearchTree{
public:
	BST_Node* root;

	BinarySearchTree();

	BinarySearchTree(int rootValue);

	BST_Node* insert(BST_Node* rootNode, int data);

	bool contains(BST_Node* rootNode, int data);
};

