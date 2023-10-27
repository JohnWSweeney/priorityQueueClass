#pragma once
#include <iostream>
// sweeney's hand-rolled priority queue class.

// singly linked list node.
struct node
{
	int data;
	node* next;
};

class priorityQueue
{
private:
	node* init(int data);
	bool isAscending = true;
	int sort(node** list);
public:
	int set(node** list, bool isAscending);
	int top(node* list, int &data);
	int push(node** list, int data);
	int pop(node** list);
	int clear(node** list);
	int isEmpty(node* list);
	int size(node* list, int &nodeCount);
	int print(node* list);
};