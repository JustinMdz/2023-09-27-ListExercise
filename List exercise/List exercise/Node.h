#pragma once
#include <iostream>
#include "Dog.h"
using namespace std;

class Node {

private:

    Dog* data;
    Node* next;

public:
    Node(Dog* _data) : data(_data), next(nullptr) {}
	void setDog(Dog*);
	void setNextNode(Node* ptrNextNode);
	Dog* getDog();
	Node* getNextNode();
	string toString();
	~Node();
};