#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int top;            // Index of the top element
    int data[MAX_SIZE]; // Array to hold stack elements

public:
    Stack(){
	top=-1;
	} // Constructor initializes top to -1

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow!" << endl;
            return;
        }
        data[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; // You might want to handle this differently
        }
        return data[top];
    }
};

int main() {
    Stack stack;
    int n=0;
   for(int i=0; i<102; i++){
   	
   	stack.push(n=n+2);
   }
   
   for(int i=0; i<102; i++){
   	cout<<stack.peek()<<" ";
   	stack.pop();
   }


    cout << "Top element: " << stack.peek() << endl;

    stack.pop();

    cout << "Top element after pop: " << stack.peek() << endl;

    return 0;
}

