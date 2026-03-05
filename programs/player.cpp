// player.cpp
// Alikhan Samidinov
// Creates a player with name, level; 
// saves that player to save.txt file
// On the run, reads the file and loads the player back with stats 
#include<iostream> 
#include<string> 
#include<fstream> 
using namespace std;

int main() {
	// declaration
	string name;
	int health = 100;
	int level = 0;
	
	//i/o
	cout << "Please enter name of player: ";
	cin >> name;
	
	// save to file 
	ofstream outFile("save.txt");
    outFile << name << endl;
	outFile << health << endl;
	outFile << level << endl;
    outFile.close();

    // load from file
    ifstream inFile("save.txt");
    string loadedName;
    int loadedHealth, loadedLevel;
	inFile >> loadedName >> loadedHealth >> loadedLevel;
    inFile.close();
    
    // print stats
    cout << "Player loaded!" << endl;
	cout << "Name: " << loadedName << endl;
	cout << "Health: " << loadedHealth << endl;
	cout << "Level: " << loadedLevel << endl;
	
	return 0;
}