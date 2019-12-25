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
			if(cin.fail()) throw 2;
			push_back(&L1, g);
		}
		cout << "Enter the size of L2 ";
		cin >> k;
		for(int a=0; a < k; a++){
			TE g;
			cout << "Enter L2: ";
			cin >> g;
			if(cin.fail()) throw 2;
			push_back(&L2, g);
		}
		cout <<endl;
		sort(&L1, &L2);
/*		Node* stuff = &L1;
		while(stuff->pNext!=nullptr){
			cout << stuff->data << " ";
			stuff = stuff->pNext;
		}*/
		int f = i+k;
		for(int i = 0; i < f; i++){
			cout << getData(&L1, i) << endl;
		}
	}
	catch(const int a){
		switch(a){
			case 0: cout << "ERROR: bad index"; break;
			case 1: cout << "ERROR: index < 0"; break;
			case 2: cout << "ERROR: input error"; break;
		}
		return 1337;
	}
	return 0;
}
