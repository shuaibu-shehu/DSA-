#include <iostream>

using namespace std;

class list {
    struct node {
        int data;
        node* link;
    }* p;

public:
    void inslast(int x) {
    node* q, * t;
    if (p == NULL) {
        p = new node;
        p->data = x;
        p->link = NULL;
    } else {
        q = p;
        while (q->link != NULL)
            q = q->link;
        t = new node;
        t->data = x;
        t->link = NULL;
        q->link = t;
    }
    cout << "\nInserted successfully at the end..";
    disp();
}
    void insbeg(int x){
    node* q;
    q = p;
    p = new node;
    p->data = x;
    p->link = q;
    cout << " \nInserted successfully at the beginning..";
    disp();
}
    void insnext(int value, int position) {
    node* temp, * temp1;
    temp = p;
    if (temp1 == NULL) {
        temp1 = new node;
        temp1->data = value;
        temp1->link = NULL;
        p = temp1;
        return;
    }
    for (int i = 0; ((i < position) && (temp->link != NULL)); i++) {
        if (i == (position - 1)) {
            temp1 = new node;
            temp1->data = value;
            temp1->link = temp->link;
            temp->link = temp1;
        }
        temp = temp->link;
    }
    //cout<<" Inserted successfully at the position.."<<position;
    disp();
}
    void delelement(int x){
    node* q, * r;
    q = p;
    if (q->data == x) {
        p = q->link;
        delete q;
        return;
    }
    r = q;
    while (q != NULL) {
        if (q->data == x) {
            r->link = q->link;
            delete q;
            return;
        }
        r = q;
        q = q->link;
    }
    cout << " \nElement u entered   " << x << "    is not found..";
}
    void delbeg() {
    cout << " \nThe list before deletion:";
    disp();
    node* q;
    q = p;
    if (q == NULL) {
        cout << " \nNo data is present..";
        return;
    }
    p = q->link;
    delete q;
    return;
}
    void dellast(){
    cout << " \nThe list before deletion:";
    disp();
    node* q;
    q = p;
    if (q == NULL) {
        cout << " \nThere is no data in the list..";
        return;
    }
    if (q->link == NULL) {
        p = q->link;
        delete q;
        return;
    }
    while (q->link->link != NULL)
        q = q->link;
    q->link = NULL;
    return;
}
    void disp() {
    node* q;
    q = p;
    if (q == NULL) {
        cout << " \nNo data is in the list..";
        return;
    }
    cout << " \nThe items present in the list are :";
    while (q != NULL) {
        cout << "    " << q->data;
        q = q->link;
    }
}
    int seek(int value) {
    node* temp;
    temp = p;
    int position = 0;
    while (temp != NULL) {
        if (temp->data == value)
            return position + 1;
        else {
            temp = temp->link;
            position = position + 1;
        }
    }
    cout << " \nElement " << value << " not found";
    return 0;
}

    list() {
        p = NULL;
    }

    ~list();
};
 



list::~list() {
    node* q;
    if (p == NULL)
        return;
    while (p != NULL) {
        q = p->link;
        delete p;
        p = q;
    }
}



int main() {
    list l;
    int ch, v, p, ps;
    do {
        cout << " \nOperations on List..";
        cout << " \n1.Insertion \n2.Deletion \n3.Display \n4.Seek \n5.Exit";
        cout << " \nEnter your choice:";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "\n1.Insertion at beginning \n2.Insertion at the end";
                cout << "\n3.Insertion after the mentioned position ";
                cout << " \nEnter your choice:";
                cin >> ps;
                cout << " \nEnter the value to insert:";
                cin >> v;
                switch (ps) {
                    case 1:
                        l.insbeg(v);
                        break;
                    case 2:
                        l.inslast(v);
                        break;
                    case 3:
                        cout << " \nEnter the position to insert the value:";
                        cin >> p;
                        l.insnext(v, p);
                        break;
                    default:
                        cout << " \nThe choice is invalid";
                        //return;
                }
                break;

            case 2:
                cout << "\n1.Delete the first element \n2.Delete the last element ";
                cout << " 3.Enter the element to delete from the list";
                cout << " \nEnter your choice:";
                cin >> ps;
                switch (ps) {
                    case 1:
                        l.delbeg();
                        cout << " \nThe list after deletion:";
                        l.disp();
                        break;
                    case 2:
                        l.dellast();
                        cout << " \nThe list after deletion:";
                        l.disp();
                        break;
                    case 3:
                        l.disp();
                        cout << " \nEnter the element to delete :  ";
                        cin >> v;
                        l.delelement(v);
                        cout << " \nThe list after deletion:";
                        l.disp();
                        break;
                    default:
                        cout << " \The option is invalid...";
                        break;
                }
                break;

            case 3:
                l.disp();
                break;
            case 4:
                l.disp();
                cout << "\n Enter the element to search:";
                cin >> v;
                cout << " \nThe position of the element " << v << "  is " << l.seek(v);
            
                break;
            case 5:
                exit(1);
            default:
                cout << " \The option is invalid...";
                //return;
        }
    
    } while (ch != 5);
    
    //return;
}

