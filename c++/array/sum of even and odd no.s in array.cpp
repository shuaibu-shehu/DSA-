//#include <iostream>
//using namespace std;
//int main() {
//    int size;
//	cout<<"Enter the size of the Array:";
//	cin>>size;
//    int numbers[size];
//    int evenSum = 0, oddSum = 0;
//
//    // Input: Reading numbers into the array
//    cout << "Enter " << size << " numbers: ";
//    for (int i = 0; i < size; i++) {
//        std::cin >> numbers[i];
//    }
//
//    // Calculation: Summing even and odd numbers separately
//    for (int i = 0; i < size; i++) {
//        if (numbers[i] % 2 == 0) {
//            evenSum += numbers[i];
//        } else {
//            oddSum += numbers[i];
//        }
//    }
//
//    // Output: Printing the sum of even and odd numbers
//    cout << "Sum of even numbers: " << evenSum <<endl;
//    cout << "Sum of odd numbers: " << oddSum <<endl;
//
//    return 0;
//}


#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;
int main() {
    int size; // You can change this value as per your requirement
    cout<<"Enter the size of the Array: ";
    cin>>size;
    int numbers[size];

    // Input: Reading numbers into the array
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // Initialization with the first element of the array
    int minVal = numbers[0];
    int maxVal = numbers[0];

    // Finding the minimum and maximum values
    for (int i = 1; i < size; i++) {
        if (numbers[i] < minVal) {
            minVal = numbers[i];
        }
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
    }

    // Output: Printing the minimum and maximum values
    cout << "Minimum value: " << minVal << std::endl;
    cout << "Maximum value: " << maxVal << std::endl;

    return 0;
}

