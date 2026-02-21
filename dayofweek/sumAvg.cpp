// sumAvg.cpp
// Alikhan Samidinov
// Practice with arrays "Easy Task"
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int num[5];
	int sum = 0;
	double average = 0.0;
	
	cout << "Enter 5 numbers: ";
	
	for(int i = 0; i < 5; i++){
		cin >> num[i];
	}
	
	cout << "Output: ";
	for(int i = 0; i < 5; i++){
		sum += num[i];
	}
	
	average = (double)sum / 5;
	
	cout << "Sum = " << sum << endl;
	cout << "Average = " << average << setprecision(2) << fixed << endl;
	
	return 0;
}