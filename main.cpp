#include "func1.h"

int main(){
	
	List lst;
	lst.push_back(5);
	lst.push_back(10.2);
	lst.push_back(31.24);
	lst.push_back(43.23);
	for(int i; i < lst.Size; i++){
		cout << lst[i] << endl;
	}
}


