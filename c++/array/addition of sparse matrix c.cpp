#include<iostream>
class MyClass {
public:
    static int count; // Declaration of static data member
    int value;

    MyClass(int val) : value(val) {MyClass::count++;}
};

int MyClass::count = 0; // Definition and initialization of static data member

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    MyClass::count++; // Accessing and modifying the static data member

    std::cout << "Object 1 value: " << obj1.value << std::endl;
    std::cout << "Object 2 value: " << obj2.value << std::endl;
    std::cout << "Count: " << MyClass::count << std::endl;

    return 0;
}

