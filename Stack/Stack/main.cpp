#include "MyStack.h"
#include <iostream>


int main()
{


	MyStack<int> stack(30);

	stack.push_back(97);
	stack.push_back(98);
	stack.push_back(99);
	stack.push_back(100);
	
	int n = 0;

	stack.pop_back(n);
	stack.pop_back(n);
	stack.pop_back(n);
	stack.pop_back(n);
	stack.pop_back(n);


	getchar();
	return 0;

}