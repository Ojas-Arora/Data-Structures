//Deletion Operation  
// Delete an element at given particular index
#include<iostream>
using namespace std;
int main(){
	int n,c,index;
	cout<<"Enter number of elements in array"<<endl;
	cin>>n;
	int array[n];
	cout<<"Enter Elements"<<endl;
	for(c=0;c<n;c++)
	{
		cin>>array[c];
	}
	cout<<"Delete Elements of the array"<<endl;
	cout<<"Enter index"<<endl;
	cin>>index;
	for(int i=index;i<n;i++)
	{
		array[index]=array[index+1];
		index=index+1;
	}
	n=n-1;
	for(int i=0;i<n;i++)
	cout<<array[i]<<endl;
	cout<<endl;
}
	
