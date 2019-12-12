#include "func1.h"


#include <iostream>	
#include <fstream>
#include <stdexcept>


using namespace std;

int main(){
	List L1;
	List L2;
	try{
	int k;
	cout << "How much nodes do you need in L1? ";
	cin >> k;
	if(k<=0) throw 0;
	for(int i=0; i<k;i++){
		TE l;
		cout << "Enter L1: ";
		cin >> l;
		L1.push_back(l);
	}
	cout << "How much nodes do you need in L2? ";
	cin >> k;
	if(k<=0) throw 0;
	for(int i=0; i<k;i++){
		TE l;
		cout << "Enter L2: ";
		cin >> l;
		L2.push_back(l);
	}
//	L1 = merge(L1, L2);
	sort(L1, L2);
	for(int l=0; l<L1.Size; l++){
		cout << L1[l] << endl;
	}
	ofstream file("file.txt");
	for(int l=0;l<L1.Size; l++){
		file << L1[l] << " ";
	}
	}
	catch(int){
		cout << "ERROR";
		return 1488;
	}
	

	return 0;
	
}
