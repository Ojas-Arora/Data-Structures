//Create a Node in Linked List
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
}*start;
int main(){
    Node N1,N2,N3,N4;
    N1.data=46;
    N2.data=221;
    N3.data=114;
    N4.data=126;
        N1.link=&N2;
        N2.link=&N3;
        N3.link=&N4;
        N4.link=NULL;
        start=&N1;
        while(start!=NULL){
            cout<<start->data<<endl;
            start=start->link;
        }
        
}
