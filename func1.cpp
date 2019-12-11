#include "func1.h"

using namespace std;




List::List(){
	Size = 0;
	head = nullptr;
}
/*)
void List::pop_front()
{
	Node *temp = head;

	head = head->pNext;

	delete temp;

	Size--;

}*/

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
	

Node& List::operator()(const int index){	
	Node *current = this -> head;
	int counter = 0;
	while(current!=nullptr){
		if(counter == index){
			return *current;
		}
		current = current->pNext;
		counter++;
	}
}

Node& List::pNext(const int index){	
	Node *current = this -> head;
	int counter = 0;
	while(current!=nullptr){
		if(counter == index){
			return *current->pNext;
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

void shit(List L1, List L2){
	L1(1) = L2(1);
}


void merge(List L1, List L2){
			
	for(int i=0; i<L2.Size-1; i+=2){
		
		for(int j=0; j<L2.Size-1; j++){
			
			if(L2[0] >= L1[i]){
			
				Node const * const l1next = &L1.pNext(i);
				Node const * const l2next = &L2.pNext(0);
				L2.pNext(0) = l1next;
				L1.pNext(i) = L2(0);
				L1.Size++;
				L2.head = l2next;
				L2.Size--;
				
				break;
				
			}
			
		}
		
	}
	
}
