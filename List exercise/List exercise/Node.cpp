#include "Node.h"

void Node::setDog(Dog* newDog)
{
	this->data = newDog;
}

void Node::setNextNode(Node* ptrNextNode)
{
	next = ptrNextNode;
}

Dog* Node::getDog()
{
	return data;
}

Node* Node::getNextNode()
{
	return next;
}

string Node::toString()
{
	/*stringstream ss;
	ss << data->toString();
	return ss.str();*/
	return "a";
}

Node::~Node()
{
	delete data;
}