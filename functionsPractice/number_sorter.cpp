// number_sorter.cpp
// Alikhan Samidinov
// Number Sorter & Stats
// Asks user to enter numbers, sorts them using
// bubble sort, then displays min, max, and average.
#include <iostream>
#include <string>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << (i < size-1 ? ", " : "\n");
}

float calcAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return (float)sum / size;
}

void printStats(int arr[], int size) {
    cout << "Sorted:  "; printArray(arr, size);
    cout << "Min:     " << arr[0] << endl;
    cout << "Max:     " << arr[size-1] << endl;
    cout << "Average: " << calcAverage(arr, size) << endl;
}

int main() {
    int size;
    
    cout << "How many numbers? ";
    cin >> size;

    int nums[100];
    
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> nums[i];
    }
    
    

    bubbleSort(nums, size);
    printStats(nums, size);
    
    return 0;
}




