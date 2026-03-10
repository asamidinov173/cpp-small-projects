// polindrome.cpp
// Alikhan Samidinov
// Palindrome Checker
// Checks if a word reads the same forwards and backwards
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word) {
    int n = word.length();
    
    for (int i = 0; i < n / 2; i++)
        if (word[i] != word[n - 1 - i]) return false;
        
    return true;
}

int main() {
    string word;
    
    cout << "Enter a word: ";
    cin >> word;
    if (isPalindrome(word))
        cout << word << " is a palindrome!" << endl;
    else
        cout << word << " is NOT a palindrome." << endl;
        
    return 0;
}

// Enter: racecar
