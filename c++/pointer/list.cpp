// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<string> myList;

//     // Adding elements to the list
//     myList.push_back("shuiabu");
//     myList.push_back("shehu");
//     myList.push_back("bilal");

//     // Accessing elements in the list
//     cout << "Elements in the list: ";
//     for (const string& e : myList) {
//         cout << e << " ";
//     }
//     cout <<endl;

//     // Removing elements from the list
//     myList.pop_front();

//     // Updated list
//     cout << "Elements after removing the first element: ";
//     for (const string& element : myList) {
//        cout << element << " ";
//     }
//       cout <<endl;

//       myList.pop_front();
//     cout<<"after removing another element: ";
//     for (const string& e: myList)
//     {
//         cout<<e<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }

#include <iostream>
using namespace std;

 class Node{
    public:
    int value;
    Node* next;
 };
 void print(Node *n){
    while(n!=NULL){
        cout<< n->value <<" ";
        n = n ->next ;
    }
 }

 int main(){
    Node* p1=new Node();
    Node* p2=new Node();
    Node* p3=new Node();
    p1->value =5;
    p2->value =6;
    p3->value =9;
    p1->next = p2;
    p2->next = p3;
    p3->next=NULL;
    print(p1);
    return 0;

 }
