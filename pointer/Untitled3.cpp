#include <iostream>
using namespace std;
void print(void* ptr,char type){
	switch(type){
		case 'i': cout<<*((int*)ptr)<<endl; break;
	}
}
    
int main(){
	
	int num=6;
	print(&num, 'i');
    return 0;
}

