#pragma once
template <class T>
class SinglyLinkedList
{
	struct Node{
		T data_;
		Node* Next_;
		Node(T* data, Node* next);
	};
	Node* first_;
	Node* last_;
public:
	SinglyLinkedList();
	~SinglyLinkedList();
	class const_iterator{
		Node* current_;
		//Methods needed ++ (next iterator)
		//Current node's data (* dereference)
		//Operator == (compare addresses!)
	};
	class iterator : public const_iterator{
		//= (assignment)
	};
};

