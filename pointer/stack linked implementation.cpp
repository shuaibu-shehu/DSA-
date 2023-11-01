#include <iostream>
#include <cstring>

using namespace std;

struct Node{
	int data;
	Node* link;
};

class Stack{
	Node* top;
	public:
		void push(int val){
				Node* newNode=new Node();
				newNode->data=val;
				newNode->link=top;	
				top=newNode;
			
		}
		int peek(){
		  if(isEmpty()){
		  	cout<<"underflow!";
			return -1;	  	
		  }
			
		  return top->data;	
		}
		void pop(){
			if(isEmpty()){	
				cout<<"underflow!";
				return;
			}
			cout<<"popped  item: "<<top->data;
			Node * temp;
			temp=top;
			top=top->link;
			delete temp;
		}
		void disp() {
    		if (isEmpty()) {
        		cout << "Underflow!" << endl;
        		return;
    			}
    		Node* temp = top;
    		cout << "Elements in the stack: ";
    		while (temp != NULL) {
        	cout << temp->data << " ";
        	temp = temp->link;
    	}
    	cout << endl;
	}

		bool isEmpty() {
        return top == NULL;
    }
};

int main(){
	Stack stack;
	int ch,v;
	string ans="y";
	do{ 
	    cout<<"1. Push \n2. Display \n3. Number at peek \n4. Pop\n";
	    cout<<"Enter your choice: ";
	    cin>>ch;
	    switch(ch){
	    	case 1:
	    		cout<<"enter the value to push to the stack: ";
				cin>>v;
				stack.push(v);
				cout<<v<<" is pushed to the stack succesfully\n";
				break;
			case 2:
				stack.disp();
				break;
			case 3:
				cout<<"Peek element: "<<stack.peek();
				break;
			case 4:
				stack.pop();
				break;
			default:
				cout<<"Invalid input!";
				break;
		}
	
		cout<<"\nDo you want to perforn any ops again ? ";
		cin>>ans;
	} while(ans=="y");
	
}
