//Linked List in reverse order
#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
}*start;
int main(){
    node N1,N2,N3,N4,N5;
    N1.data=100;
    N2.data=60;
    N3.data=30;
    N4.data=20;
    N5.data=15;
    N1.next=&N2;
    N2.next=&N3;
    N3.next=&N4;
    N4.next=&N5;
    start=&N1;
    cout<<"Linked List in reverse order is "<<endl;
    while(start!=NULL){
    cout<<start->data<<endl;
    start=start->next;
}
}
