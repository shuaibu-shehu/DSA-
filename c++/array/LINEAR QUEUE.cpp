#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

class LinearQueue {
private:
    int front, rear;
    int data[MAX_SIZE];

public:
    LinearQueue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {									// 
        return (rear == MAX_SIZE - 1 && front == 0) || (rear + 1 == front);  //[2,4]
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue.\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        data[rear] = item;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        int i = front;
        while (true) {
            cout << data[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX_SIZE;
        }
        cout << endl;
    }
};

int main() {
    LinearQueue linearQueue;
    linearQueue.enqueue(1);
    linearQueue.enqueue(2);
    linearQueue.enqueue(3);
    linearQueue.display();

    linearQueue.dequeue();
    linearQueue.display();

    linearQueue.enqueue(4);
    linearQueue.enqueue(5);
    linearQueue.enqueue(6);
    linearQueue.display();

    return 0;
}

