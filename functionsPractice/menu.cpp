// menu.cpp
// Alikhan Samidinov
// Simple Menu 
// User picks a food or drink from a menu and gets the price
#include <iostream>
using namespace std;

void printMenu() {
    cout << "--- Menu ---" << endl;
    cout << "1. Burger  - $5.99" << endl;
    cout << "2. Pizza   - $7.99" << endl;
    cout << "3. Salad   - $4.49" << endl;
    cout << "4. Coffee  - $2.99" << endl;
    cout << "5. Juice   - $3.49" << endl;
}

void getOrder(int choice) {
    switch (choice) {
        case 1: cout << "You ordered a Burger. Total: $5.99" << endl; break;
        case 2: cout << "You ordered a Pizza. Total: $7.99" << endl; break;
        case 3: cout << "You ordered a Salad. Total: $4.49" << endl; break;
        case 4: cout << "You ordered a Coffee. Total: $2.99" << endl; break;
        case 5: cout << "You ordered a Juice. Total: $3.49" << endl; break;
        default: cout << "Invalid choice!" << endl;
    }
}

int main() {
    int choice;
    printMenu();
    
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    getOrder(choice);
    
    return 0;
}



