// contact.cpp
// Alikhan Samidinov
// Lets user add contacts (name + phone number),
// then search for a contact by name and display their number.
#include <iostream>
#include <string>
using namespace std;

void addContacts(string names[], string phones[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter name: ";
        cin >> names[i];
        cout << "Enter phone: ";
        cin >> phones[i];
    }
}

void printContacts(string names[], string phones[], int size) {
    cout << "\n--- Contact Book ---" << endl;
    for (int i = 0; i < size; i++)
        cout << names[i] << " -> " << phones[i] << endl;
}

void searchContact(string names[], string phones[], int size) {
    string query;
    cout << "\nSearch contact: ";
    cin >> query;
    for (int i = 0; i < size; i++) {
        if (names[i] == query) {
            cout << "Found! " << names[i] << ": " << phones[i] << endl;
            return;
        }
    }
    cout << "Contact not found." << endl;
}

int main() {
    int size;
    
    cout << "How many contacts? ";
    cin >> size;

    string names[100], phones[100];
    addContacts(names, phones, size);
    printContacts(names, phones, size);
    searchContact(names, phones, size);
    
    return 0;
}


