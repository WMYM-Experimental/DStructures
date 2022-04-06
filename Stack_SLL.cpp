#include "Stack_SLL.h"

Stack_SLL::Stack_SLL(){
	stk = new SinglyLinkedList();
}

void Stack_SLL::push(int data){
	stk->insertAtEnd(data);
}

void Stack_SLL::pop(){
	stk->deleteAtEnd();
	// TODO: RETURN ELIMINATED NODE
}

int Stack_SLL::peek(){
	return stk->peek();
}

bool Stack_SLL::empty(){
	if (stk->head == NULL) {
		return true;
	}

	if (stk->len() == 0) {
		return true;
	}

	return false;
}

int Stack_SLL::size(){
	return stk->len();
}

void Stack_SLL::print(){
	stk->print();
}

void Stack_SLL::reversePrint(){
	stk->reversePrint_R(stk->head);
}
