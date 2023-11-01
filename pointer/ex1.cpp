//#include <iostream>
//
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int value) {
//        data = value;
//        next =NULL;
//    }
//};
//
//class LinkedList {
//public:
//    Node* head;
//
//    LinkedList() {
//        head = NULL;
//    }
//
//    void insert(int value) {
//        Node* newNode = new Node(value);
//
//        if (head == NULL) {
//            head = newNode;
//        } else {
//            Node* temp = head;
//            while (temp->next != NULL) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//
//    void display() {
//        Node* temp = head;
//        while (temp != NULL) {
//            std::cout << temp->data << " ";
//            temp = temp->next;
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    LinkedList list;
//    list.insert(10);
//    list.insert(20);
//    list.insert(30);
//    list.display();
//
//    return 0;
//}

#include <iostream>

class ListNode {
public:
    int value;
    ListNode* next;

    ListNode(int val) : value(val), next(NULL) {}
};

ListNode* appendNode(ListNode* head, int value) {
    ListNode* newNode = new ListNode(value);
    newNode->next = head;
    return newNode;
}

void printList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* list = NULL;
    list = appendNode(list, 3);
    ListNode* list2 = appendNode(list, 2);
    ListNode* list3 = appendNode(list2, 1);

    std::cout << "Original List: ";
    printList(list3);

    list2 = appendNode(list, 0);

    std::cout << "Modified List: ";
    printList(list3);

    return 0;
}

