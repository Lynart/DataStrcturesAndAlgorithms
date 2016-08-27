#include "stdafx.h"

Node::Node() {
	value = 0;
	next = this;
}

Node::Node(const int v, Node* n) {
	value = v;
	next = n;
}

int Node::nextNodeValue() {
	// (*next).currentNodeValue;
	// The above also works
	return next -> currentNodeValue();
}

int Node::currentNodeValue() {
	return value;
}