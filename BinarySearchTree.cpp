#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(){
	this->root = NULL;
}

BinarySearchTree::BinarySearchTree(int rootValue){
	this->root = new BST_Node(rootValue);
}

BST_Node* BinarySearchTree::insert(BST_Node* rootNode, int data){
	if (rootNode == NULL) {
		rootNode = new BST_Node(data);
	}
	else if (data <= rootNode->data) {
		rootNode->left = insert(rootNode->left, data);
	}
	else {
		rootNode->right = insert(rootNode->right, data);
	}
	return rootNode;
}

bool BinarySearchTree::contains(BST_Node* rootNode, int data){
	if (rootNode == NULL) {
		return false;
	}
	else if (rootNode->data == data) {
		return true;
	}
	else if(data < rootNode->data) {
		contains(rootNode->left, data);
	}
	else {
		contains(rootNode->right, data);
	}
}

