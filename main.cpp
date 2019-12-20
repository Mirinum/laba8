#include "func1.h"


#include <iostream>	
#include <fstream>
#include <stdexcept>
#include <string>


using namespace std;

int main(){
	Node L1, L2;
	try{
		int i,j,k;
		cout << "Enter the size of L1 ";
		cin >> i;
		for(int a=0; a < i; a++){
			TE g;
			cout << "Enter L1: ";
			cin >> g;
			if(cin.fail()) throw 0;
			push_back(&L1, g);
		}
		for(int a=0; a<i; a++){
			cout << getData(&L1, a) << " ";
		}
		cout << "Enter the size of L2 ";
		cin >> k;
		for(int a=0; a < k; a++){
			TE g;
			cout << "Enter L2: ";
			cin >> g;
			if(cin.fail()) throw 0;
			push_back(&L2, g);
		}
		for(int a=0; a<k; a++){
			cout << getData(&L2, a) << " ";
		}
		cout <<endl;
		sort(&L1, &L2);
		Node* stuff = &L1;
		while(stuff->pNext!=nullptr){
			cout << stuff->data << " ";
			stuff = stuff->pNext;
		}
	}
	catch(string a){
		cout << "ERROR: " << a;
		return 1337;
	}
	

	return 0;
	
}
