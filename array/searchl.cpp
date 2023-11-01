#include<iostream>
using namespace std;

main(){
	
	int size;
	cout<<"Enter the the size of the array: ";
	cin>>size;
	
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"Array is: ";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nEnter the element to search: ";
	int ele;
	cin>>ele;
	int loc;
	int found=0; 
	for(int i=0; i<size; i++){
		if(arr[i]==ele){
			loc=i;
			found=ele;
		}
	}
	if(found==0){
		cout<<"element not found!";
	} else{
		cout<<"element is found at index "<<loc;
	}
}
