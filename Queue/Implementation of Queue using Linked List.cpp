//Implementation of Queue using Linked List
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Queue {
private:
    Node* front; 
    Node* rear; 
public:
    Queue() {
        front = NULL;
        rear = NULL;
    }
    bool isEmpty() {
        return front == NULL;
    }
    void enqueue(int item) {
        Node* newNode = new Node;
        newNode->data = item;
        newNode->next = NULL;

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
    }
    void printQueue() {
        Node* current = front;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot get front element.\n";
            return -1; 
        }
        return front->data;
    }
};

int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    cout << "Queue elements: ";
    myQueue.printQueue();

    cout << "Front element: " << myQueue.getFront() << endl;

    myQueue.dequeue();
    cout << "Front element after dequeue: " << myQueue.getFront() << endl;

    return 0;
}

