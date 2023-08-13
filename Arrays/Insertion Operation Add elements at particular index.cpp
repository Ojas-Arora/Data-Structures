//Insertion Operation Add elements at particular index
#include<iostream>
using namespace std;
int main(){
	 int position,c,n,value;
	cout<<"Enter number of elements in array"<<endl;
	cin>>n;
	int array[n];
	cout<<"Enter Elements"<<endl;
	for(c=0;c<n;c++){
		cin>>array[c];
	}
	cout<<"Enter position where u want to insert"<<endl;
	cin>>position;
	cout<<"Enter value to be inserted"<<endl;
	cin>>value;
	n=n+1;
	for(c=n-1;c>=position-1;c--){
		array[c+1]=array[c];
	}
	array[position-1]=value;
	
	cout<<"New array is"<<endl;
	for(c=0;c<n;c++){
		cout<<array[c]<<endl;
	}
	return 0;
	}
