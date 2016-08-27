#ifndef Node_H
#define Node_H
class Node {
	int value;
	Node* next;

public:
	Node();
	Node(const int v, Node* n);
	int nextNodeValue();
	int currentNodeValue();
};
#endif