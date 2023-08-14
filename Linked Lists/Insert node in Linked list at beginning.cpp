//Insert node in Linked list at beginning
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int x) {
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main() {
    Node *head = NULL;
    head = insertBegin(head, 30);
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
  return 0;
}
