#ifndef FUNC1_H
#define FUNC1_H

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
		TE& operator[](const int index);
		int Size;
		Node *head;
		
};

List merge(List L1, List L2);
List sort(List L1);

#endif
