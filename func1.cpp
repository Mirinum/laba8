#include "func1.h"

using namespace std;




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
			return current;
		}
		current = current->pNext;
		counter++;
	}
}

Node* List::pNext(const int index){	
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



int merge(List L1, List L2){
	cout << L1[2] << L1[1];
	cout << endl<<"Lol";
	return 0;
}