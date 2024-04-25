#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
    int left = 0; // Left endpoint of the search interval
    int right = size - 1; // Right endpoint of the search interval

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        // If the key is found at the middle
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is in the left half of the interval
        if (arr[mid] > key) {
            right = mid - 1;
        }

        // If the key is in the right half of the interval
        else {
            left = mid + 1;
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

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}

