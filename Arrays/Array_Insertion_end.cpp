#include<iostream>
#include<conio.h>
#define size 50
int arr[size];
using namespace std;
int main()
{
	int n,ele;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter the elements of array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	if(n>=size)
	{
		cout<<"Array is full!"<<endl;
	}
	else
	{
		cout<<"Enter the element you want to enter:";
		cin>>ele;
		arr[n]=ele;
		n=n+1;
	}
	
	cout<<"The array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}