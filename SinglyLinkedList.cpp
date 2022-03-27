#include "SinglyLinkedList.h"

// Default Constructor
SinglyLinkedList::SinglyLinkedList() {
	this->head = NULL;
}

// Params Constructor
SinglyLinkedList::SinglyLinkedList(Node* head) {
	this->head = head;
}

// ** METHODS **

int SinglyLinkedList::len() {
	Node* currentNode = this->head;
	int l = 0;
	// Taversal
	while (currentNode != NULL) {
		l++;
		currentNode = currentNode->next;
	}
	return l;
}

void SinglyLinkedList::insertAtEnd(int n) {
	Node* newNode = new Node(n);

	if (head == NULL) {
		head = newNode;
		return;
	}

	Node* currentNode = this->head;

	// Taversal
	while (currentNode->next != NULL) {
		currentNode = currentNode->next;
	}

	currentNode->next = newNode;
}

void SinglyLinkedList::insertAtBeginning(int n)
{
	Node* aux = this->head;
	Node* newNode = new Node(n);

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
	Node* newNode = new Node(v);
	Node* aux = this->head;

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

	Node* newHead = this->head->next;
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

	Node* aux = this->head;

	for (int i = 0; i < nth - 2; i++) {
		aux = aux->next;
	}

	Node* temp = aux->next;
	aux->next = temp->next;

	delete(temp);
}

void SinglyLinkedList::print() {
	if (this->head == NULL) {
		std::cout << "EMPTY LIST\n\n";
		return;
	}

	Node* currentNode = this->head;

	// Taversal
	while (currentNode != NULL) {
		std::cout << currentNode->data << std::endl;
		currentNode = currentNode->next;
	}
	std::cout << std::endl;
}