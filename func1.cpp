#include "func1.h"
#include <assert.h>
#include <stdexcept>
#include <iostream>

using namespace std;

List::List(){
	Size = 0;
	head = nullptr;
}

void List::push_back(TE data){
	if(head == nullptr){
		head = new Node(data);
	}
	else{
		Node *current = this->head;
		while(current->pNext != nullptr){
			current = current->pNext;
		}
		current->pNext = new Node(data);
	}
	Size++;
}

TE& List::operator[](const int index){	
	Node *current = this -> head;
	int counter = 0;
	while(current!=nullptr){
		if(counter == index){
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
	throw 1;
}

List merge(List L1, List L2){
	List merged;
	for(int i=0; i<L1.Size;i++){
		merged.push_back(L1[i]);
	}
	for(int i=0; i<L2.Size;i++){
		merged.push_back(L2[i]);
	}
	return merged;
}

void sort(List &L1, List &L2)
{
	for(int i=0; i<L2.Size;i++){
		L1.push_back(L2[i]);
	}
	Node *nextN = L1.head;
	if (L1.head == NULL) return void();
	Node *node1;
	Node *node2;
	int check = 1;
	node2 = new Node;
	while (check)
	{
		check = 0;
		node1 = L1.head;
		nextN = node1->pNext;
		while (nextN != 0)
		{
			if (double(node1->data) > double(nextN->data))
			{
				node2->data = node1->data;
				node1->data = nextN->data;
				nextN->data = node2->data;
				check++;
			}

			node1 = nextN;
			nextN = nextN->pNext;
		}
	}

	return void();
}

List::~List()
{
	while (head != NULL)
	{
		Node *next = head->pNext;
		delete head;
		head = next;
	}
	delete head;
	cout << endl << "List destructed";
}
