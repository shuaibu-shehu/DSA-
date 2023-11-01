#include <iostream>
using namespace std;

// Function to partition the array into two sub-arrays and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = (low - 1); // Index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Swap the pivot element with the element at (i+1), which is the correct position of the pivot
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to perform QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Get the pivot index, elements on the left are smaller, and elements on the right are greater
        int pivot = partition(arr, low, high);

        // Recursively sort the sub-arrays before and after the pivot
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
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

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, size - 1);

    cout << "Sorted array (Quick Sort): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

