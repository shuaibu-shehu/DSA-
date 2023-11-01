#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found in the array
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
    cout<<"Enter the key for search:";
    int key ; // Element to search for
    cin>>key;

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}

