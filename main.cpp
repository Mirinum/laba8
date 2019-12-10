#include "func1.h"

int main(){
	List L1;
	List L2;
	int k;
	cout << "How much nodes do you need in L1? ";
	cin >> k;
	for(int i=0; i<k;i++){
		double l;
		cout << "Enter L1: ";
		cin >> l;
		L1.push_back(l);
	}
	cout << "How much nodes do you need in L2? ";
	cin >> k;
	for(int i=0; i<k;i++){
		double l;
		cout << "Enter L2: ";
		cin >> l;
		L2.push_back(l);
	}
	cout <<"Shit";
	merge(L1,L2);
	for(int i=0; i < L1.Size; i++){
		cout << L1[i] << endl;
	}
	ofstream file("file.txt");
	for (int i=0; i < L1.Size; i++){
		file << L1[i] << " ";
	}
	return 0;
}
