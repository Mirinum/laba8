#ifndef FUNC1_H
#define FUNC1_H

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
typedef double TE;

struct node{
	double value;
	node *next = NULL;
};

struct stack{
	node *head = NULL;
} L1, L2, Lresult;

void add(double value){
	node *n = new node();
	n->value = value;
	n->next = stck.head;
	фыфоыадыалдыфждфолад.head = n;
}



/*void AddValue(int value, node **list)
{
  node *ptr = new node;
  if (ptr)
  {
    ptr->value = value;
    ptr->next = NULL;
    if(list == NULL)
    {
      *list = ptr;
    }
    else
    {
      node *p;
      p = *list;
      while (p->next)
        p = p->next;
      p->next = ptr;
    }
  }
}
*/


#endif