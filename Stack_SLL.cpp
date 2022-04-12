#include "Stack_SLL.h"

Stack_SLL::Stack_SLL(){
	this->stk = new SinglyLinkedList();
}

void Stack_SLL::push(int data){
	this->stk->insertAtEnd(data);
}

int Stack_SLL::pop(){
	return this->stk->deleteAtEnd();
}

int Stack_SLL::peek(){
	return this->stk->peek();
}

bool Stack_SLL::empty(){
	if (this->stk->head == NULL || this->stk->len() == 0) {
		return true;
	}

	return false;
}

int Stack_SLL::size(){
	return this->stk->len();
}

void Stack_SLL::print(){
	this->stk->print();
}

void Stack_SLL::reversePrint(){
	this->stk->reversePrint_R(this->stk->head);
}
