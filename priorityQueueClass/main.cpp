#include <iostream>
#include "priorityQueue.h"

int main()
{
	std::cout << "Priority Queue Class\n\n";

	node* list = nullptr;
	int result;
	int data;
	int nodeCount;

	priorityQueue pq;

	for (int i = -5; i < 5; i++)
	{
		pq.push(&list, pow(i, 4));
	}
	result = pq.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		pq.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
	/// test code here: ////////////////////////////////////////
	
	std::cout << "result: " << result << "\n\n";
	////////////////////////////////////////////////////////////
	result = pq.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		pq.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
}