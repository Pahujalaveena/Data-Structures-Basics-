#include<iostream>
#include<conio.h>
#define size 10
int arr[size],ele,n;
void Insertion();
using namespace std;

int main()
{
	cout<<"Enter the size of array:";
	cin>>n;

    cout<<"Enter the elements:"<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	
	if(n==size)
	{
		cout<<"Array is full!"<<endl;
	}
	else
	{
		n++;
		cout<<"Enter the element you want to add:";
		cin>>ele;
		Insertion();
	}
}

void Insertion()
{
	for(int i=n;i>=1;i--)
	{
		arr[n]=arr[n-1];
	}
	arr[1]=ele;
	
	cout<<"The array after insertion is :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
}