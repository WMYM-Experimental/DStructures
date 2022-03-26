#pragma once
#include <iostream>

class Node
{
public:
	int data;
	Node* next;

	//Default constructor
	Node();

	//Params Constructor
	Node(int data);
};

