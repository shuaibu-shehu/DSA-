#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPostfix(const string& infix) {
    stack<char> operators;
    string postfix;
    
    for (char c : infix) {
        if (isalnum(c)) { // Operand, add to the output
            postfix += c;
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Remove the '(' from the stack
        } else { // Operator
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }
    
    // Pop any remaining operators from the stack
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }
    
    return postfix;
}

int main() {
    string infix_expression;
    cout << "Enter an infix expression: ";
    cin >> infix_expression;
    
    string postfix_expression = infixToPostfix(infix_expression);
    
    cout << "Postfix expression: " << postfix_expression << endl;
    
    return 0;
}

