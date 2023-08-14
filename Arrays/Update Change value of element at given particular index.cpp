//Update Change value of element at given/particular index
#include<iostream>
using namespace std;
int main(){
		int n,c,index,value;
	cout<<"Enter number of elements in array"<<endl;
	cin>>n;
	int array[n];
	cout<<"Enter Elements of array"<<endl;
	for(c=0;c<n;c++){
		cin>>array[c];
	}
	cout<<"Update Value in the array "<<endl;
	cout<<"Enter Index to be Updated"<<endl;
	cin>>index;
	cout<<"Value of Element"<<endl;
	
	cin>>value;
	array[index]=value;
	for(int i=0;i<n;i++)
	cout<<array[i]<<endl;
	
}
