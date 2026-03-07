// inventory_easy.cpp
// Alikhan Samidinov
// Simple Inventory System
// Stores product names and prices, lets you
// search for a product, and calculates the total inventory value.
#include <iostream>
#include <string>
using namespace std;

void printInventory(string items[], float prices[], int size) {
    cout << "--- Inventory ---" << endl;
    for (int i = 0; i < size; i++)
        cout << "[" << i+1 << "] " << items[i] << " - $" << prices[i] << endl;
}

float totalValue(float prices[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++)
        total += prices[i];
    return total;
}

int searchItem(string items[], int size, string query) {
    for (int i = 0; i < size; i++)
        if (items[i] == query) return i;
    return -1;
}

int main() {
    string items[]  = {"Laptop", "Mouse", "Keyboard", "Monitor"};
    float prices[]  = {999.99, 29.99, 49.99, 299.99};
    int size = 4;

    printInventory(items, prices, size);
    cout << "Total Value: $" << totalValue(prices, size) << endl;

    string search = "Mouse";
    int idx = searchItem(items, size, search);
    if (idx != -1)
        cout << search << " found at position " << idx+1 << ", Price: $" << prices[idx] << endl;
    else
        cout << search << " not found." << endl;

    return 0;
}


