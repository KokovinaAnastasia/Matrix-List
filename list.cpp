#include "pch.h"
#include "list.h"
#include <iostream>

using namespace std;

list::list()
{
	head = NULL;
	count = 0;
};

void list::addNode(int d)
{
	Node* node = new Node;
	node->data = d;
	node->next = NULL;
	if (head == NULL)
		head = node;
	else
	{
		Node* current = head;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
	count++;
};

void list::printList()
{
	Node* current = head;
	cout << current->data << "  ";
	while (current->next != NULL)
	{
		current = current->next;
		cout << current->data << "  ";
	}
};

void list::del(Node* node)
{
	Node* currentNode = head;
	while (currentNode->next != node)
		currentNode = currentNode->next;
	currentNode->next = node->next;
	count--;
};

void list::delOdd()
{
	Node* node = head;
	while (node != NULL && node->next != NULL)
	{
		Node* current = node;
		while (current->next != NULL)
		{
			current = current->next;
			if (current->data == node->data)
			{
				del(current);
			};
		};
		node = node->next;
	};
};

Node* list::returnNodeFromLast(int number)
{
	int current = 1;
	Node* currentNode = head;
	while (current != count - number + 1)
	{
		currentNode = currentNode->next;
		current++;
	}
	return currentNode;
};
