#include "func1.h"


#include <iostream>	
#include <fstream>
#include <cstddef>

using namespace std;

int main(){
	List L1;
	List L2;
	int k;
	cout << "How much nodes do you need in L1? ";
	cin >> k;
	for(int i=0; i<k;i++){
		TE l;
		cout << "Enter L1: ";
		cin >> l;
		L1.push_back(l);
	}
	cout << "How much nodes do you need in L2? ";
	cin >> k;
	for(int i=0; i<k;i++){
		TE l;
		cout << "Enter L2: ";
		cin >> l;
		L2.push_back(l);
	}
	L1 = merge(L1, L2);
	L1 = sort(L1);
	for(int l=0; l<L1.Size; l++){
		cout << L1[l] << endl;
	}
	ofstream file("file.txt");
	for(int l=0;l<L1.Size; l++){
		file << L1[l] << " ";
	}

	return 0;
}
