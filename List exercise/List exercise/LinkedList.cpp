#include "LinkedList.h"

void LinkedList::insert(Dog* dog)
{
}

void LinkedList::display()
{
}

void LinkedList::deleteFirstDogRegister()
{
	Node* currentNode = head;
	head = head->getNextNode();
	delete currentNode;
}

void LinkedList::deleteLastDogRegister()
{
	Node* currentNode = head;
	while (currentNode != nullptr) {

		if (currentNode->getNextNode() == nullptr) {
			delete currentNode;
		}
	}
}

void LinkedList::deleteDogRegister(string dogName)
{
    Node* currentNode = head;
    Node* previousNode = nullptr;

    while (currentNode) {
        if (currentNode->getDog()->getName() == dogName) {
           
            if (previousNode != nullptr) {
          
                previousNode->setNextNode(currentNode->getNextNode());
                delete currentNode;
                return;
            }
            else {
                deleteFirstDogRegister();
            }
        }

        previousNode = currentNode;
        currentNode = currentNode->getNextNode();
    }
}