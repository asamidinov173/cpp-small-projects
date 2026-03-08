// todo.cpp
// Alikhan Samidinov
// Simple To Do List
// Lets the user add tasks to a list,
// then displays all tasks at the end.
#include <iostream>
#include <string>
using namespace std;

void addTasks(string tasks[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter task " << i+1 << ": ";
        cin.ignore();
        getline(cin, tasks[i]);
    }
}

void printTasks(string tasks[], int size) {
    cout << "\n--- Your To-Do List ---" << endl;
    for (int i = 0; i < size; i++)
        cout << i+1 << ". " << tasks[i] << endl;
}

int main() {
    int size;
    
    cout << "How many tasks? ";
    cin >> size;

    string tasks[100];
    addTasks(tasks, size);
    printTasks(tasks, size);
    
    return 0;
}






