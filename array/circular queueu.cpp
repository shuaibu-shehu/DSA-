#include<iostream>
using namespace std;


class Queue{
	private:
		int front,rear,size;
		int data[];
	public:
		Queue(int x){
			front=rear=-1;
			size=x;
			data[size];
		}
		void enqueue(int e){
			if((rear+1)%size==front){
				cout<<"\nOverflow !";
			} else if(rear==-1 && front==-1){
				front=rear=0;
				data[rear]=e;
			} else{
				rear=(rear+1)%size;
				data[rear]=e;
			}
		}
		void dequeue(){
			if(rear==-1 && front==-1)
				cout<<"Underflow !";
			else
				cout<<"\nElement dequeued: "<<data[front];
				front=(front+1)%size;
		}
	 void display(){
	 	if(rear==-1 && front==-1){
	 		cout<<"\nUnderflow !";
		 }else{
		
	 	for(int i=front; i!=rear; i=(i+1)%size){
	 		cout<<data[i]<<" ";
	 		
		 }
		 cout<<data[rear];
      	}
	 }
	 int peek(){
	 	if(front==-1 && rear==-1)
	 		cout<<"\nQueue is empty !";
	 	else
	 		return data[front];
	 }
		
};

int main(){
	cout<<"Enter the size of the queue: ";
	int size;
	cin>>size;
	Queue queue(size);
    cout<<"1)Enqueque\n";
    cout<<"2)Dequeque\n";
    cout<<"3)Display\n";
    cout<<"4)Get the peek\n";
    cout<<"5)Exit\n";
    while(true){
    	cout<<"\nEnter your choice :";
    	int ans;
    	cin>>ans;
    	switch(ans){
    		case 1:
    			cout<<"\nEnter the number to enqueu: ";
    			int num; 
    			cin>>num;
    			queue.enqueue(num);
    			break;
    		case 2:
    			queue.dequeue();
    			break;
    		case 3:
    			queue.display();
    			break;
    		case 4:
    		  cout<<"\nElemet at the pick "<<queue.peek();
    			break;
    		case 5:
    			return 0;
		}
	}
	
}
