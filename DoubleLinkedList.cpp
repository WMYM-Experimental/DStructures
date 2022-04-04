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
    int l = 0;
    DLL_Node* currrentNode = this->head;
    while(currrentNode->next != NULL){
        l++;
        currrentNode = currrentNode->next;
    }

    return l;
}

void DoubleLinkedList::insertAtEnd(int n){
    DLL_Node* newNode = new DLL_Node(n);

    if (this->head == NULL) {
        this->head = newNode;
        return;
    }
    DLL_Node* currentNode = this->head;
    // Taversal
    while (currentNode->next != NULL) {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
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
    if (this->head == NULL) {
        std::cout << "EMPTY LIST\n\n";
        return;
    }

    DLL_Node* currentNode = this->head;

    // Taversal
    while (currentNode != NULL) {
        std::cout << currentNode->data << std::endl;
        currentNode = currentNode->next;
    }
    std::cout << std::endl;
}

void DoubleLinkedList::reversePrint_R(DLL_Node* node){
}

void DoubleLinkedList::print_R(DLL_Node* node){
}
