#include<iostream>
#include<conio.h>
#define size 10
int arr[size];
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	
	cout<<"Enter the elements of array:"<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The array is:"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
