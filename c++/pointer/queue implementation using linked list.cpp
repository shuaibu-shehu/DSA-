#include <iostream>

using namespace std;

class Queue{
	private:
		struct Node{
		int data;
		Node* next;
	};
		Node* rear,*front;
	public:
		Queue(){
			front=rear=NULL;
		}
		void enque(int x){
			Node* newNode=new Node();
			newNode->data=x;
			newNode->next=NULL;
			if(front==NULL && rear==NULL){
				front=rear=newNode;
			}
			else{
			 rear->next=newNode;
			 rear=newNode;
			}
			
		}
		void disp(){
			Node* temp;
			
			if(front==NULL){
				cout<<"Underflow";
			}
			else{
				temp=front;
				cout<<"Queue: ";
				while(temp!=NULL){
					cout<<temp->data<<" ";
					temp=temp->next;
				}
			}
		}
		void deque(){
			Node* temp;
			temp=front;
			if(front==NULL){
				cout<<"Underflow";
				return;
			}
			cout<<"dequed element: "<<front->data;
			front=front->next;
			delete temp;	
		}
		
		int peek(){
			if(front==NULL)
				cout<<"\nUnderflow";
			return front->data;
		}
		
};


int main(){
	Queue queue;
   	int ch,v;
	string ans="y";
	do{ 
	    cout<<"1. Enqueue \n2. Display \n3. Peek \n4. Deque\n";
	    cout<<"Enter your choice: ";
	    cin>>ch;
	    switch(ch){
	    	case 1:
	    		cout<<"enter the value to add to the queue: ";
				cin>>v;
				queue.enque(v);
				cout<<v<<" is added to the queue succesfully\n";
				break;
			case 2:
				queue.disp();
				break;
			case 3:
				cout<<"Peek element: "<<queue.peek();
				break;
			case 4:
				queue.deque();
				break;
			default:
				cout<<"Invalid input!";
				break;
		}
	
		cout<<"\nDo you want to perforn any ops again ? ";
		cin>>ans;
	} while(ans=="y");
	
}
