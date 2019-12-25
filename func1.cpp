#include "func1.h"
#include <assert.h>
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;


void push_back(Node* head, TE data){
	if(head->data == NULL) head->data = data;
	else{
		while(head->pNext!=nullptr){
			head = head->pNext;
		}
		Node *temp = new Node(data);
		head->pNext = temp;
	}
}

double getData(Node* head, int index){
	if(index<0) throw 1;
	Node* temp = head;
	int i;
	while(i<index){
		if(temp->pNext!= nullptr){
			temp = temp->pNext;
			i++;
		}
		else throw 0;
	}
	return temp->data;
}

void sort(Node *L1, Node *L2)
{
	Node* stuff = L2;
	while(stuff->pNext!=nullptr){
		push_back(L1, stuff->data);
		stuff = stuff->pNext;
	}
	push_back(L1, stuff->data);
	Node *nextN = L1;
	if (L1 == nullptr) return void();
	Node *node1;
	Node *node2;
	int check = 1;
	node2 = new Node;
	while (check)
	{
		check = 0;
		node1 = L1;
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

