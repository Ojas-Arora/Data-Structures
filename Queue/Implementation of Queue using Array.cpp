//Implementation of Queue using Array
#include <iostream>
using namespace std;
struct Queue {
    int front, rear, size;
    int* queue;
    Queue(int c)
    {
        front = rear = 0;
        size = c;
        queue = new int;
    }
~Queue() { delete[] queue; }
    void enqueue(int element)
    {
        if (size == rear) {
            cout<<"Queue is full"<<endl;
            return;
        }
        else {
            cout<<"Element inserted"<<endl;
            queue[rear] = element;
            rear++;
        }
        return;
    }
    void dequeue()
    {
        if (front == rear) {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
            cout<<"Element deleted"<<endl;
            rear--;
        }
        return;
    }
    void printQueue()
    {
        if (front == rear) {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        cout<<"The queue is: ";
        for (int i = front; i < rear-1; i++) {
            cout<<queue[i]<<" <-- ";
        }
        cout<<queue[rear-1]<<endl;
        return;
    }
    void getFront()
    {
        if (front == rear) {
            cout<<"The Queue is Empty"<<endl;
            return;
        }
        cout<<"Front element is: "<< queue[front]<<endl;
        return;
    }
};
int main()
{
    Queue queue(5);
    queue.printQueue();
    queue.enqueue(7);
    queue.enqueue(4);
    queue.enqueue(9);
    queue.enqueue(6);
    queue.printQueue();
    queue.enqueue(1);
    queue.printQueue();
    queue.dequeue();
    queue.printQueue();
    queue.dequeue();
    queue.printQueue();
    queue.getFront();
    return 0;
}
