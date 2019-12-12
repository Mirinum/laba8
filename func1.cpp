#include "func1.h"




#include <iostream>

using namespace std;

List::List(){
	Size = 0;
	head = nullptr;
}

List::~List(){
/*	while (head){
		pop_front();
	}
	cout << endl << "List destroyed";*/
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

List sort(List L1)
{
	Node *nextN = L1.head;
	if (L1.head == NULL) return L1;
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

	return L1;
}
