#include<iostream>
#include<conio.h>
#define size 10
int arr[size],n,ele;
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
	
	ele=arr[1];
	n--;
	
	
	for(int i=1;i<=n;i++)
	{
		arr[i]=arr[i+1];
	}
	
	cout<<"The array after deletion is :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
}