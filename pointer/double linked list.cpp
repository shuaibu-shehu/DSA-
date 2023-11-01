#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		void printFoward(Node* head){
			Node * t = head;
			while(t->next != NULL){
				cout<<t->data<<endl;
				t=t->next;
			}
		}
};

int main(){
	Node* head;
	Node* tail;
	
	Node* node = new Node();
    node->data = 6;
    node->prev = NULL;
    node->next = NULL;
    tail=node;
    head=node;
    
    node = new Node();
    node->data=9;
    node->prev=tail;
    node->next = NULL;
    tail->next = node;
    tail=node;
    
    
    node =new Node();
    node->data = 4;
    node->prev = tail;
    node->next = NULL;
    tail->next = node;
    tail = node;
    Node List;
    List.printFoward(head);
    
    
}
