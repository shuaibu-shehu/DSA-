#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int v){
	Node* newNode=new Node();
	newNode->data=v;
	newNode->left=newNode->right=NULL;
	return newNode;
}

void print(Node *root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}
int main(){
	Node* root=createNode(2);
	root->left=createNode(6);
	root->right=createNode(7);
	root->left->left=createNode(8);
	print(root);
}