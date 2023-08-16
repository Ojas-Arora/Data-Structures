//Insert node in Linked list at end
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int x) {
    Node *temp = new Node(x);
    if (head == NULL) 
        return temp;
    
    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;
      curr->next = temp;
    return head;
}

int main() {
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    
    Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}
