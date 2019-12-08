#ifndef FUNC1_H
#define FUNC1_H


#include <iostream>	
#include <fstream>
using namespace std;

typedef double TE;

struct Node{
	public:
		Node *pNext;
		TE data;
		Node(TE data = TE(), Node *pNext = nullptr){
		this->data = data;
		this->pNext = pNext;
	}

};

struct List{
	public:
		List();
		~List();
		void push_back(TE data);
		int GetSize(){return Size;}
		TE& operator[](const int index);
		Node *operator()(const int index);
		Node *pNext(const int index);
		int Size;
		Node *head;
		
};

int merge(List L1, List L2);

#endif