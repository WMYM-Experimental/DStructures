#include "Queue_SLL.h"

Queue_SLL::Queue_SLL() {
    this->queue = new SinglyLinkedList();
}

void Queue_SLL::add(int data){
    this->queue->insertAtEnd(data);
}

int Queue_SLL::peek(){
    return this->queue->head->data;
}

int Queue_SLL::poll(){
    return this->queue->deleteAtEnd();
}

int Queue_SLL::size(){
    return this->queue->len();
}
