//#include "func1.h"

#include <iostream>
#include <fstream>
using namespace std;

struct List{
	public:
		List();
		~List();
		void push_back(double data);
		int GetSize(){return Size;}
		
		double& operator[](const int index);
		
		
	private:
		struct Node{
			public:
				Node *pNext;
				double data;
				Node(double data = double(), Node *pNext = nullptr){
					this->data = data;
					this->pNext = pNext;
				}
		};
		int Size;
		Node *head;
		
};


List::List(){
	Size = 0;
	head = nullptr;
}


List::~List(){
	
}

void List::push_back(double data){
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


double& List::operator[](const int index){
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


int main(){
	
	List lst;
	lst.push_back(5);
	lst.push_back(10.2);
	lst.push_back(31.24);
	lst.push_back(43.23);
	cout << lst[2];
}


