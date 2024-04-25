#include<iostream>
using namespace std;

main(){
	int **data=new int*[4];
	for(int i=0; i<4; i++){
		data[i]=new int [4];
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			data[i][j]=i*j;
		}
	}
	data[2][0]=100;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<data[i][j]<<" ";
		}
		cout<<endl;
	}
}
