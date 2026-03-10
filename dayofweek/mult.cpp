// mult.cpp
// Alikhan Samidinov
// Multiplication Table
// Prints the multiplication table for a given number
#include <iostream>
using namespace std;

void printTable(int n) {
    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;
}

int main() {
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    printTable(n);
    
    return 0;
}