// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Node.h"


int main()
{
	Node one(1, NULL);
	Node two(2, &one);
	Node three(3, &two);

	std::cout << one.currentNodeValue();
	std::cout << two.currentNodeValue();
	std::cout << three.currentNodeValue();

	std::cout << two.nextNodeValue();
	std::cout << three.nextNodeValue();
	return 0;
}

