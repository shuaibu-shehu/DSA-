#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;
class postfix{
	private:
		int stack[50],len,top;
		char post[50];
	public:
		postfix(){
			top=-1;
		}
		
		void push(int);
		int pop();
		int pfix();
			
};
int postfix::pfix(){
	int a,b,i,temp;
	cout<<"\nEnter postfix expression: ";
	cin>>post;
	len=strlen(post);
	post[len]='#';
	for(i=0; post[i]!='#'; i++){
		if(post[i]>='0' && post[i]<='9'){
			push(post[i]-'0');
		}
		else{
			a=pop();
			b=pop();
			switch(post[i]){
				case '+':
				    temp =b+a;
					break;
				case '-':
				    temp=b-a;
					break;
				case '*':
				    temp=b*a;
					break;
				case '/':
					temp =	b/a;
					break;
				case '^':
					temp=pow(b,a);
					break;
			}
			push(temp);
		}
		
	}
	return pop();	
}

void postfix::push(int x){
	stack[++top]=x;
}

int postfix::pop(){
	int x=stack[top];
	top=top-1;
	return x;
}
main(){
 postfix obj;
 int result=obj.pfix();
cout<<"\nInfix evaluation is: "<<result;
}
