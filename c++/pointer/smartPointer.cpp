//Describing smart pointers;
#include <iostream>
#include <memory>
#include <cstring>
using namespace std;

class myClass {
private:
    int rno = 362;
    char* name;  // Pointer to store the name

public:
    myClass() {
        cout << "Constructor is invoked!\n";
        name = new char[7];
        strcpy(name, "shuiabu shehu");
    }
    ~myClass() {
        cout << "Destructor is invoked!";
        delete[] name;  // Deallocate the memory for name
        cout<<endl;
    }
    void prinInfo() {
        cout << "\nMy name is: " << name << endl;
        cout << "\nMy roll no is: " << rno << endl;
    }
};

int main() {
    //unnique pointer
    unique_ptr<int> unptr = make_unique<int>(30);
    unique_ptr<int> unptr2 = move(unptr);
    cout << *unptr2 << endl;

    unique_ptr<myClass> obj = make_unique<myClass>();
    obj->prinInfo();
    cout<<endl;

    //shared pointer
    shared_ptr<myClass>sptr=make_shared<myClass>();
    cout<<endl<<sptr.use_count()<<endl;
    shared_ptr<myClass>sptr2=sptr;
    cout<<endl<<sptr.use_count()<<endl;

    return 0;
}
