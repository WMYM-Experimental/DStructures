#include "BST_Node.h"
#include <iostream>

BST_Node::BST_Node() {
	this->data = 0;
	this->left = NULL;
	this->right = NULL;
}


BST_Node::BST_Node(int data){
	this->data = data;
	this->left = NULL;
	this->right = NULL;
}
