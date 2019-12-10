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
	List* l1 = &L1;
	List* l2 = &L2;
	merge(L1, L2);
	int l = 0;
	while(L1(l)!=nullptr){
		cout << L1[l] << endl;
		l++;
	}
	ofstream file("file.txt");
	l = 0;
	while(L1(l)!=nullptr){
		file << L1[l] << " ";
		l++;
	}
	

	return 0;
}
