//Delete Middle Node of Linked List
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *link;
}*start;
int main(){
	Node N1,N2,N3,N4,N5;
	N1.data=27;
	N2.data=36;
	N3.data=41;
	N4.data=59;
	N5.data=74;
	N1.link=&N2;
	N2.link=&N3;
	N3.link=&N4;
	N4.link=&N5;
	N5.link=NULL;
	start=&N1;
	while(start!=NULL){
		cout<<start->data<<endl;
		start=start->link;
	}
	cout<<"Delete middle node of Singly Linked List"<<endl;
	N1.link=&N2;
	N2.link=&N4;
	N4.link=&N5;
	start=&N1;
	while(start!=NULL){
		cout<<start->data<<endl;
		start=start->link;
	}
	return 0;
}
