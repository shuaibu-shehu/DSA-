#include <iostream>
using namespace std;
int main() {
    int initialSize = 10; // You can change this value as per your requirement
    cout<<"Enter the size of the Array: ";
    cin>>initialSize;
    int numbers[initialSize];

    // Input: Reading initial numbers into the array
    cout << "Enter " << initialSize << " numbers: ";
    for (int i = 0; i < initialSize; i++) {
        cin >> numbers[i];
    }

    int element, position;

    // Input: Reading the element and the position to insert
    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert (0-based index): ";
    cin >> position;

    // Check if the position is valid
    if (position >= 0 && position <= initialSize) {
        const int newSize = initialSize + 1;
        int newArray[newSize];

        // Copy elements before the insertion point
        for (int i = 0; i < position; i++) {
            newArray[i] = numbers[i];
        }

        // Insert the new element
        newArray[position] = element;

        // Copy elements after the insertion point
        for (int i = position; i < initialSize; i++) {
            newArray[i + 1] = numbers[i];
        }

        // Output: Display the new array with the inserted element
        cout << "New array after insertion: ";
        for (int i = 0; i < newSize; i++) {
            cout << newArray[i] << " ";
        }
        cout << std::endl;
    } else {
        cout << "Invalid position. The position should be between 0 and " << initialSize <<endl;
    }

    return 0;
}

