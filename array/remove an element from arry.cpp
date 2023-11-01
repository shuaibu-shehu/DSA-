// C++ program to remove a given element from an array
#include<bits/stdc++.h>
using namespace std;

// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr[], int n, int x)
{
// Search x in array
int i;
for (i=0; i<n; i++)
	if (arr[i] == x)
		break;
		
// If x found in array
if (i < n)
{
	// reduce size of array and move all
	// elements on space ahead
	n = n - 1;
	for (int j=i; j<n; j++)
		arr[j] = arr[j+1];
}

}

/* Driver program to test above function */
int main()
{
	
	int size;
	cout<<"Enter the size of the array:\n";
	cin>>size;
	int arr[size];
	
	cout<<"Enter the elements: \n";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int x;
	cout<<"Enter the elements to remove: ";
	cin>>x;

	// Delete x from arr[]
	size=deleteElement(arr, size, x);

	cout << "Mo dified array is \n";
	for (int i=0; i<size; i++)
	cout << arr[i] << " ";

	return 0;
}

