// word.cpp
// Alikhan Samidinov
// Takes an array of words and counts how many
// times each unique word appears, then prints the results.
#include <iostream>
#include <string>
using namespace std;

int countWord(string words[], int size, string target) {
    int count = 0;
    for (int i = 0; i < size; i++)
        if (words[i] == target) count++;
    return count;
}

bool alreadyCounted(string checked[], int size, string word) {
    for (int i = 0; i < size; i++)
        if (checked[i] == word) return true;
    return false;
}

void printFrequency(string words[], int size) {
    string checked[100];
    int checkedCount = 0;

    cout << "--- Word Frequency ---" << endl;
    for (int i = 0; i < size; i++) {
        if (!alreadyCounted(checked, checkedCount, words[i])) {
            int freq = countWord(words, size, words[i]);
            cout << words[i] << ": " << freq << " time(s)" << endl;
            checked[checkedCount++] = words[i];
        }
    }
}

int main() {
    int size;
    cout << "How many words? ";
    cin >> size;

    string words[100];

    for (int i = 0; i < size; i++) {
        cout << "Enter word " << i+1 << ": ";
        cin >> words[i];
    }

    printFrequency(words, size);
    return 0;
}




