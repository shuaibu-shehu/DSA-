#include <iostream>
#include <vector>
#include <string>

class Stack {
private:
    std::vector<std::string> data;

public:
    void push(std::string value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) {
            data.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    std::string top() {
        if (!data.empty()) {
            return data.back();
        } else {
            std::cout << "Stack is empty. No top element." << std::endl;
            return ""; // Return a sentinel value or throw an exception here
        }
    }

    bool empty() {
        return data.empty();
    }

    size_t size() {
        return data.size();
    }
};

int main() {
    Stack myStack;

    myStack.push("ss");
    myStack.push("suaibu");
    myStack.push("aliaga");

    std::cout << "Top element: " << myStack.top() << std::endl;

    myStack.pop();

    if (myStack.empty()) {
        std::cout << "Stack is empty" << std::endl;
    } else {
        std::cout << "Stack is not empty" << std::endl;
    }

    std::cout << "Size of stack: " << myStack.size() << std::endl;

    return 0;
}


