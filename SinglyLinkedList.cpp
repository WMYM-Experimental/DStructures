#include "SinglyLinkedList.h"

// Default Constructor
SinglyLinkedList::SinglyLinkedList() {
	this->head = NULL;
}

// Params Constructor
SinglyLinkedList::SinglyLinkedList(SLL_Node* head) {
	this->head = head;
}

// ** METHODS **

int SinglyLinkedList::len() {
	if (this->head == NULL) {
		return 0;
	}

	SLL_Node* currentNode = this->head;
	int l = 0;

	// Taversal
	while (currentNode != NULL) {
		l++;
		currentNode = currentNode->next;
	}
	return l;
}

void SinglyLinkedList::insertAtEnd(int n) {
	SLL_Node* newNode = new SLL_Node(n);

	if (head == NULL) {
		head = newNode;
		return;
	}

	SLL_Node* currentNode = this->head;

	// Taversal
	while (currentNode->next != NULL) {
		currentNode = currentNode->next;
	}

	currentNode->next = newNode;
}

void SinglyLinkedList::insertAtBeginning(int n)
{
	SLL_Node* aux = this->head;
	SLL_Node* newNode = new SLL_Node(n);

	newNode->next = aux;
	head = newNode;
}

void SinglyLinkedList::insert(int v, int nth) {

	// Check valid position
	if (nth > this->len()) {
		std::cout << "Invalid Position\t" << nth << std::endl;
		exit(EXIT_FAILURE);
	}

	// Check recurrent position
	if (nth == 0) {
		insertAtBeginning(v);
		return;
	}
	else if (nth == this->len() - 1) {
		insertAtEnd(v);
		return;
	}

	// Default nth position insertion
	SLL_Node* newNode = new SLL_Node(v);
	SLL_Node* aux = this->head;

	for (int i = 0; i < nth - 1; i++) {
		aux = aux->next;
	}

	newNode->next = aux->next;
	aux->next = newNode;
}

void SinglyLinkedList::deleteFirst() {
	if (this->head == NULL) {
		std::cout << "EMPTY LIST\n\n";
		exit(EXIT_FAILURE);
	}

	SLL_Node* newHead = this->head->next;
	delete(this->head);
	this->head = newHead;
}


void SinglyLinkedList::deleteAt(int nth) {
	// Check valid position
	int l = this->len();

	if (this->head == NULL) {
		std::cout << "INVALID EMPTY LIST\n\n";
		exit(EXIT_FAILURE);
	}

	if (nth > l || nth < 0) {
		std::cout << "Invalid Position\t" << nth << std::endl;
		exit(EXIT_FAILURE);
	}

	if (nth == 0) {
		this->deleteFirst();
		return;
	}
	else if (l == 1) {
		this->head = NULL;
		return;
	}

	SLL_Node* aux = this->head;

	for (int i = 0; i < nth - 2; i++) {
		aux = aux->next;
	}

	SLL_Node* temp = aux->next;
	aux->next = temp->next;

	delete(temp);
}

int SinglyLinkedList::deleteAtEnd(){
	// bad try to do this could improve O(2n) :c
	int temp = this->peek();
	this->deleteAt(this->len());
	return temp;
}

int SinglyLinkedList::peek(){
	SLL_Node* aux = this->head;
	while (aux->next != NULL) {
		aux = aux->next;
	}
	return aux->data;
}

void SinglyLinkedList::reverse_I() {
	SLL_Node* previousNode = NULL;
	SLL_Node* currentNode = this->head;
	SLL_Node* nextNode = NULL;

	// Taversal
	while (currentNode != NULL) {
		nextNode = currentNode->next; // save current pointer for next node
		currentNode->next = previousNode; // set next pointer from the saved previous node pointer

		previousNode = currentNode; // swap
		currentNode = nextNode;
	}
	this->head = previousNode;
}

SLL_Node* SinglyLinkedList::reverse_R(SLL_Node* currentNode) {
	if (currentNode == NULL) {
		std::cout << "\n";
		return NULL;
	}
	reverse_R(currentNode->next);
	this->head = currentNode;
	return currentNode;
}

void SinglyLinkedList::reversePrint_R(SLL_Node* node) {
	if (node == NULL) {
		std::cout << "\n";
		return;
	}
	reversePrint_R(node->next);
	std::cout << node->data << std::endl;
}

void SinglyLinkedList::print_R(SLL_Node* node) {
	if (node == NULL) {
		std::cout << "\n";
		return;
	}
	std::cout << node->data << std::endl;
	print_R(node->next);
}

int SinglyLinkedList::search_I(int k){
	SLL_Node* currentNode = this->head;
	int counter = 0;
	while (currentNode != NULL){
		if (currentNode->data == k){
			return counter;
		}
		counter++;
		currentNode = currentNode->next;
	}
	return -1;
}

void SinglyLinkedList::print() {
	if (this->head == NULL) {
		std::cout << "EMPTY LIST\n\n";
		return;
	}

	SLL_Node* currentNode = this->head;

	// Taversal
	while (currentNode != NULL) {
		std::cout << currentNode->data << std::endl;
		currentNode = currentNode->next;
	}
	std::cout << std::endl;
}