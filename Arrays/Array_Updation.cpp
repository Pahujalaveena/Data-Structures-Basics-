#include<iostream>
#include<conio.h>
#define size 10
int arr[size],n,ele,pos;
using namespace std;

int main()
{
	cout<<"Enter the size of array:";    //a number less than 10
	cin>>n;
	
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the position :";
	cin>>pos;
	cout<<"Enter the element you want to insert:";
	cin>>ele;
	
	for(int i=n;i>pos;i--)
	{
		arr[n+1]==arr[n];
	}
	arr[pos]=ele;
	
	cout<<"The array after insertion is:"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
