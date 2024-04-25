#include<iostream>
using namespace std;

struct  Node{
	int data;
	Node* next;
	
};

class LinkedList{
	public:
		void prin(Node* n){
			while(n!=NULL){
				cout<<n->data<<" ";
				n=n->next;
			}
		}
		void addAtFront(Node* *head, int val){
			Node* newNode = new Node();
			newNode->data = val; 
			newNode->next= *head;
			* head = newNode;
		}
		void addAtEnd(Node* *head, int val){
			Node* newNode = new Node();
			newNode->data = val;
			newNode->next = NULL;
			if(*head==NULL){
				*head = newNode;
				 return;
			}
			Node *last = *head;
			while(last->next !=NULL){
				 last= last->next;
				}
			last->next=newNode;
		}
		void addAfter(Node*prev, int val){
			if(prev==NULL){
				cout<<"Previos can not be null\n";
				return;
			}
			Node* newNode= new Node();
			newNode->data = val;
			newNode->next= prev->next;
			prev->next=newNode; 
			
		}
	
	 void delAtFront(Node*& head) {
        if (head == NULL) {
            cout << "Empty list\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
		
};
int main(){	
  Node* head=new Node();
  Node* second=new Node();
  Node* third=new Node();
  head->data=4;
  head->next=second;
  second->data=5;
  second->next=third;
  third->data=2;
  third->next=NULL;
  LinkedList List;
  
  List.addAtFront(&head, 7);
  
  List.addAtEnd(&head, 80);
  List.addAfter(second, 80);
  List.prin(head);
  List.delAtFront(head);
  
  return 0;	
}
