#include <iostream>
using namespace std;

int main() {
    int size, index, newValue;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Create the array with the given size
    int arr[size];

    // Get array elements from the user
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }

    // Display the original array
    cout << "\nOriginal Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // Ask the user if they want to add an element at a specific index
    cout << "\n\nDo you want to add an element at a specific index? (1 for Yes, 0 for No): ";
    int choice;
    cin >> choice;

    while (choice == 1) {
        // Get the index and new value from the user
        cout << "Enter the index to add the element: ";
        cin >> index;

        if (index >= 0 && index <= size) {
            cout << "Enter the new value: ";
            cin >> newValue;

            // Shift the elements to the right
            for (int i = size - 1; i >= index; i--) {
                arr[i + 1] = arr[i];
            }

            // Insert the new value at the specified index
            arr[index] = newValue;

            // Update the size of the array
            size++;

            // Display the modified array
            cout << "\nModified Array: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
        } else {
            cout << "Invalid index!";
        }
        // Ask the user if they want to add an element at a specific index
    cout << "\n\nWould you want to add an element at a specific index again? (1 for Yes, 0 for No): ";
    int choice;
    cin >> choice;
    }

    return 0;
}

