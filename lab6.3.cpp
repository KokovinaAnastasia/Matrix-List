#include "pch.h"
#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	list myList = list();
	myList.addNode(4);
	myList.addNode(2);
	myList.addNode(1);
	myList.addNode(4);
	myList.addNode(3);
	myList.addNode(4);
	myList.addNode(1);
	myList.printList();

	int nodeFromLast = 2;
	Node* node = myList.returnNodeFromLast(nodeFromLast);
	cout << endl << "Node number "<<nodeFromLast<<" from last = " << node->data << endl;

	myList.delOdd();
	cout << endl << "List without doubles" << endl;
	myList.printList();

	system("pause");
	return 0;
}