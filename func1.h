#ifndef FUNC1_H
#define FUNC1_H
#include <cstddef>

typedef double TE;

struct Node{
		Node *pNext;
		TE data;
		Node(TE data = TE(), Node *pNext = nullptr){
		this->data = data;
		this->pNext = pNext;
		}
};


void push_back(Node* head,TE data);
TE getData(Node* head, int index);
void sort(Node *L1, Node *L2);

#endif
