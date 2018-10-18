#include "Node.h"

Node::Node() {
	nextPtr=0;
}

float Node::getData() const {
	return data;
}

void Node::setData(float d) {
	data=d;
}

Node* Node::getNodePtr() const {
	return nextPtr;
}

void Node::setNodePtr(Node* n) {
	nextPtr=n;
}
