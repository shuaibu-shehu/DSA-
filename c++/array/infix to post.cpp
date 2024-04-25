
#include<iostream>
#include<cstdlib> // Include this for exit function
#include<cstring> // Include this for strlen function
using namespace std;

char stack[30], postfix[30], infix[30];
int top = -1;

int pri(char x) {
    int value;
    switch (x) {
        case ')':
            value = 0;
            break;
        case '+':
        case '-':
            value = 1;
            break;
        case '*':
        case '/':
        case '%':
            value = 2;
            break;
        case '^':
            value = 3;
            break;
        case '(':
            value = 4;
            break;
        default:
            cout << "\nInvalid expression";
            exit(0);
    }
    return value;
}

void push(char x) {
    top = top + 1;
    stack[top] = x;
}

char stacktop() {
    return stack[top];
}

bool isalnum(char x) {
    return ((x >= '0' && x <= '9') || (x >= 'a' && x <= 'z') || (x>='A' && x<='Z')); // Fixed the condition
}

char pop() {
    return stack[top--];
}

void intopost(char infix[], char postfix[]) {
    int i, j = 0;
    char c, pc;
    for (i = 0; i < strlen(infix); i++) { // Changed the termination condition to use strlen
        c = infix[i];
        if (isalnum(c)) {
            postfix[j++] = c;
        } else {
            while (top != -1 && pri(stacktop()) >= pri(c)) {
                if (stacktop() == '(' && c != ')') {
                    break;
                }
                if (stacktop() == '(' && c == ')') {
                    pop();
                    break;
                }
                pc = pop();
                if (pc != 'c') { // Fixed the condition
                    postfix[j++] = pc;
                } else {
                    break;
                }
            }
            if (c != ')') {
                push(c);
            }
        }
    }
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

int main() {
    cout << "Enter infix expression:\n";
    cin >> infix;
    intopost(infix, postfix);
    cout << "postfix expression:\n";
    cout << postfix;
}
