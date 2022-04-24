#include <iostream>
#include "DoublyLinkedList.h"

// Default Constructor
DoublyLinkedList::DoublyLinkedList() {
    this->head = NULL;
}

// Params Constructor
DoublyLinkedList::DoublyLinkedList(DLL_Node* head) {
    this->head = head;
}

// ** METHODS **

int DoublyLinkedList::len(){
    int l = 0;
    DLL_Node* currrentNode = this->head;
    while(currrentNode->next != NULL){
        l++;
        currrentNode = currrentNode->next;
    }
    return l;
}

void DoublyLinkedList::insertAtEnd(int n){
    DLL_Node* newNode = new DLL_Node(n);

    if (this->head == NULL) {
        this->head = newNode;
        return;
    }

    DLL_Node* currentNode = this->head;

    while (currentNode->next != NULL) {
        currentNode = currentNode->next;
    }

    newNode->prev = currentNode;
    currentNode->next = newNode;
}

void DoublyLinkedList::insertAtBeginning(int n){
    DLL_Node* newHead = new DLL_Node(n);

    if (this->head == NULL) {
        this->head = newHead;
        return;
    }

    newHead->next = this->head;
    this->head->prev = newHead;
    this->head = newHead;
}

void DoublyLinkedList::insert(int v, int nth){
    int lenght = this->len();
    DLL_Node* newNode = new DLL_Node(v);

    if (this->head == NULL) {
        this->head = newNode;
        return;
    }

    if (nth > lenght || nth < 0) {
        std::cout << "Invalid Position\t" << nth << std::endl;
        exit(EXIT_FAILURE);
        return;
    }

    if (nth == 0) {
        this->insertAtBeginning(v);
        return;
    }
    else if (nth == lenght - 1) {
        this->insertAtEnd(v);
        return;
    }

    DLL_Node* aux = this->head;

    for (int i = 0; i < nth -1 ; i++){
        aux = aux->next;
    }

    newNode->prev = aux;
    newNode->next = aux->next;
    aux->next = newNode;
}

void DoublyLinkedList::deleteFirst(){
    this->head = this->head->next;
    this->head->prev = NULL;
}

void DoublyLinkedList::deleteEnd(){
    DLL_Node* currentNode = this->head;
    while (currentNode->next->next != NULL) {
        currentNode = currentNode->next;
    }
    delete(currentNode->next);
}

void DoublyLinkedList::deleteAt(int nth){
    int lenght = this->len();

    if (nth > lenght || nth < 0) {
        std::cout << "Invalid Position\t" << nth << std::endl;
        exit(EXIT_FAILURE);
        return;
    }

    if (nth == 0) {
        this->deleteFirst();
        return;
    }
    else if (nth == lenght - 1) {
        this->deleteEnd();
        return;
    }

    DLL_Node* aux = this->head;

    for (int i = 0; i < nth - 1; i++) {
        aux = aux->next;
    }

    aux->next->next->prev = aux;
    aux->next = aux->next->next;
}

void DoublyLinkedList::reverse_I(){
    DLL_Node* aux = this->head;
    DLL_Node* prev = NULL;
    DLL_Node* next = NULL;

    while (aux != NULL) {
        next = aux->next;
        aux->next = prev;
        aux->prev = aux->next;
        prev = aux;
        aux = next;
    }
    this->head = prev;
}

DLL_Node* DoublyLinkedList::reverse_R(DLL_Node* currentNode){
    // TODO: Improve reverse with recursion.
    if (currentNode == NULL) {
        std::cout << "\n";
        return NULL;
    }
    reverse_R(currentNode->next);
    this->head = currentNode;
    return currentNode;
}

int DoublyLinkedList::search_I(int k){
    DLL_Node* aux = this->head;
    int index = 0;
    while (aux != NULL){
        if (aux->data == k) {
            return index;
        }
        index++;
        aux = aux->next;
    }
    return -1;
}

void DoublyLinkedList::print(){
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

void DoublyLinkedList::reversePrint_R(DLL_Node* node){
    if (node == NULL) {
        std::cout << "\n";
        return;
    }
    reversePrint_R(node->next);
    std::cout << node->data << std::endl;
}

void DoublyLinkedList::print_R(DLL_Node* node){
    if (node == NULL) {
        std::cout << "\n";
        return;
    }
    std::cout << node->data << std::endl;
    print_R(node->next);
}
