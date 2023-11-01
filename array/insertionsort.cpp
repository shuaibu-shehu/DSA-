#include <iostream>

using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // Store the current element to be inserted
        int j = i - 1;

        // Move elements of the sorted subarray that are greater than the key
        // one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // Insert the key into its correct position
    }
}

int main() {
	cout<<"Enter the size of the array: \n";
	int size;
	cin>>size;
    int arr[size];
    cout << "Enter the numbers to store:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i] ;
    }
    cout << endl;
    
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

