// reverseArray.cpp
// Alikhan Samidinov
// Practice with arrays "Easy Task"
#include<iostream>
using namespace std;

int main(){
	int num[5];
	
	cout << "Enter 5 numbers: ";
	
	for(int i = 0; i < 5; i++){
		cin >> num[i];
	}
	
	cout << "Output: ";
	for(int i = 4; i >= 0; i--){
		cout << num[i] << " ";
	}
	
	return 0;
}