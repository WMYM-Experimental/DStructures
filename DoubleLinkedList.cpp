#include <iostream>
#include "DoubleLinkedList.h"

// Default Constructor
DoubleLinkedList::DoubleLinkedList() {
    this->head = NULL;
}

// Params Constructor
DoubleLinkedList::DoubleLinkedList(DLL_Node* head) {
    this->head = head;
}

// ** METHODS **

int DoubleLinkedList::len(){
    return 0;
}

void DoubleLinkedList::insertAtEnd(int n){
}

void DoubleLinkedList::insertAtBeginning(int n){
}

void DoubleLinkedList::insert(int v, int nth){
}

void DoubleLinkedList::deleteFirst(){
}

void DoubleLinkedList::deleteAt(int nth){
}

void DoubleLinkedList::reverse_I(){
}

DLL_Node* DoubleLinkedList::reverse_R(DLL_Node* currentNode){
    return nullptr;
}

int DoubleLinkedList::search_I(int k){
    return 0;
}

void DoubleLinkedList::print(){
}

void DoubleLinkedList::reversePrint_R(DLL_Node* node){
}

void DoubleLinkedList::print_R(DLL_Node* node){
}
