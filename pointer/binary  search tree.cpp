#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
struct node
{
node *left;
int value;
node *right;
};
node *curr=NULL;


int addnode(node *, node *);
int inorder(node *);
int preorder(node *);
int postorder(node *);


int main()
{
  char c;
  int v;
  //clrscr();
  do
  {
  cout<<"Enter Choice";
  cout<<"\n1 ->Add node";
  cout<<"\n2 ->Inorder traversal";
  cout<<"\n3 ->Preorder traversal";
  cout<<"\n4 ->Postorder trversal : ";
  cout<<"\n0 ->Exit\n";
  cin>>c;

  switch(c)
   {
    case '0':
		  exit(1);
    case '1':
		  node *temp;
		  temp = new node;
		  cout<<"\nEnter the value of the node : ";
		  cin>>temp->value;
		  if(curr==NULL)
		   {
		    curr=new node;
		    curr->value=temp->value;
		    curr->left=NULL;
		    curr->right=NULL;
		    cout<<"\nThe root node is added";
		   }
		  else
		    v=addnode(curr,temp);
		  if(v==1)
		    cout<<"\nThe node is added to the left";
		  else if(v==2)
		    cout<<"\nThe node is added to the right";
		  else if(v==3)
		    cout<<"\nThe same value exists";
		  break;
    case '2':
		   v=inorder(curr);
		   if(v==0)
		   cout<<"\nThe tree is empty";
		   break;
    case '3':
		   v=preorder(curr);
		   if(v==0)
		   cout<<"\nThe tree is empty";
		   break;
    case '4':
		   v=postorder(curr);
		   if(v==0)
		   cout<<"\nThe tree is empty";
		   break;
    default:
		   cout<<"\nInvalid entry";
		   break;
    }
   }while(c!='0');
   getch();
}


int addnode(node *fcurr, node *fnew )
{
  if(fcurr->value==fnew->value)
   {
     return 3;
   }
 else
   {
    if(fcurr->value > fnew->value)
     {
      if(fcurr->left != NULL)
                addnode(fcurr->left, fnew);
      else
         {
            fcurr->left = fnew;
			(fcurr->left)->left=NULL;
            (fcurr->left)->right=NULL;
            return 1;   
	      }
     }
    else
     {
      if(fcurr->right != NULL)
                addnode(fcurr->right, fnew);
      else
                {
                fcurr->right = fnew;
                (fcurr->right)->left=NULL;
                (fcurr->right)->right=NULL;
                return 2;
                }
     }
   }
}


int inorder(node *fincurr)
  {
    if(fincurr == NULL)
                return 0;
    else
     {
                 if(fincurr->left != NULL)
                  inorder(fincurr->left);
                  cout<<fincurr->value<<"	";
                 if(fincurr->right != NULL)
                  inorder(fincurr->right);
      }
  }


int preorder(node *fprcurr)
  {
    if(fprcurr == NULL)
                return 0;
    else
     {
                cout<<fprcurr->value<<"	";
                if(fprcurr->left != NULL)
                  preorder(fprcurr->left);
                if(fprcurr->right != NULL)
                  preorder(fprcurr->right);
      }
  }

int postorder(node *fpocurr)
  {
    if(fpocurr == NULL)
                return 0;
    else
     {
                if(fpocurr->left != NULL)
                  postorder(fpocurr->left);
                if(fpocurr->right != NULL)
                  postorder(fpocurr->right);
                  cout<<fpocurr->value<<"	";
      }
  }
