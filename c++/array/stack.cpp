#include<iostream>
using namespace std;



//const int max_size=50;
class Stack{
	private:
		int top;
		int n;
		int data[];
	public:
		Stack(int x){
			n=x;
			data[n];
			top=-1;
		}
		int size(){
			return top+1;
		}
		bool isEmpty(){
			return top==-1;
		}
		bool isFull(){
			return top==n-1;
		}
		void push(int val){
			if(isFull()){
				cout<<"Stack is overflow (can't push to the stack')!\n";
				return;
			}
			data[++top]=val;
			return;
		}
		int peek(){
			if(isEmpty()){     //[2,3,5,1,6]
				return -1;
			}
			return data[top]; // 5
		
		}
		void pop(){
			top--;
		}
	
		
		
};
int main(){
	cout<<"enter the size of the arr: ";
	int s;
	cin>>s;
	Stack stack(s);
	cout<<"1) push in stack\n";
	cout<<"2) pop from stack\n";
	cout<<"3) display stack\n";
	cout<<"4) size stack\n";
	cout<<"5) Exit\n";
	while(true){
	
	
	
	cout<<"\nEnter your choice\n";
	int choice;
	cin>>choice;

	switch(choice){
		case 1:
		   cout<<"Enter the element to push\n";
		   int ele;
		   cin>>ele;
		   stack.push(ele);
		   break;
		case 2:
			if(stack.peek()!=-1){
			cout<<"\npopped elemet is: "<<stack.peek();
			stack.pop();
			}else{
				cout<<"\nStack is underflow!";
			}
			break;
		case 3:
			cout<<"\nElements in the stack: ";
			while(!stack.isEmpty()){
				 cout<<stack.peek()<<" ";
				 stack.pop();
			}
			
			break;
		case 4:
		   cout<<"\nSize is: "<<stack.size();
		   break;
		case 5:
		  return 0;
		  break;
		default:
		  cout<<"\nincorrect option"; 
			
	}
	
}

}
