#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList {

private:
    Node* head;
    Node* next;

public:

    LinkedList() : head(nullptr) {}
    void insert(Dog* dog);
    void display();

    void deleteFirstDogRegister();
    void deleteLastDogRegister();
    void deleteDogRegister(string);
};