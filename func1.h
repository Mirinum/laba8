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
		int Size;
		Node *head;
		
};


List::List(){
	Size = 0;
	head = nullptr;
}


List::~List(){
	
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
	

Node* List::operator()(const int index){	
	Node *current = this -> head;
	int counter = 0;
	while(current!=nullptr){
		if(counter == index){
			return current->pNext;
		}
		current = current->pNext;
		counter++;
	}
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



#endif
