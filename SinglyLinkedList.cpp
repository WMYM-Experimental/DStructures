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

void SinglyLinkedList::insertAtEnd(int n)
{
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

void SinglyLinkedList::insertAt(int nth, int n)
{
}

void SinglyLinkedList::deleteNode(int n)
{

}

void SinglyLinkedList::print()
{
	if (this->head == NULL)
	{
		std::cout << "EMPTY LIST\n\n";
		return;
	}

	Node* currentNode = this->head;

	// Taversal
	while (currentNode != NULL)
	{
		std::cout << currentNode->data << std::endl;
		currentNode = currentNode->next;
	}
	std::cout << std::endl;
}