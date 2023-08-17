//Delete first node of singly Linked List
#include<iostream>
using namespace std;
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
Node *deletehead(Node *head){
if(head==NULL)
return NULL;
else{
	Node *temp=head->next;
	delete head;
	return temp;
 }
};
int main(){
	Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next=new Node(50);
    head = deletehead(head);
    
    Node*current=head;
    while(current!=NULL){
    	cout<<current->data<<" ";
    	current=current->next;
    		}
    	return 0;
}
