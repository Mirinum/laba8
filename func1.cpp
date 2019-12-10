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
	
	while(L2.Size > 0){
		cout << "Fuck";
		
		for(int i=L1.Size-1; i>0; i--){
			
			for(int j=0; j<L2.Size-1; j++){
				
				if(L2[j] >= L1[i]){
					
					Node* l1next = L1.pNext(i);
					Node* l2next = L2.pNext(j);
					*L1.pNext(i) = *L2(j);  //тут ошибка
					L1.Size++;
					if(l1next == nullptr){
						*L2.pNext(j) = 0;
					}
					else{
						*L2.pNext(j) = *l1next;
					}
					
					L1.Size++;
					if(j != 0){
						
						*L2.pNext(j-1) = *l2next;
						L2.Size--;
						
					}
					else {
						L2.head = l2next;
						L2.Size--;
					}
					
					break;
					
				}
				
			}
			
			if(L2.Size == 1){
				*L1.pNext(L1.Size-1) = *L2(0);
				L2.head = nullptr;
				L2.Size = 0;
			}
			
		}
		
	}
	
	return 0;
}
