#include<iostream>
#include<conio.h>
#define size 10
int arr[size],ele,count=0;
using namespace std;

int main()
{
	int n;
	cout<<" Enter the size of array:";
	cin>>n;
	
	cout<<"Enter the elements of array:";
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the element you want to search:";
	cin>>ele;
	
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==ele)
		{
			cout<<"Element "<<ele<<" is found on "<<i<<endl;
			count++;
		}
	}
	if(count==0)
	{
		cout<<"Element "<<ele<<" is not found"<<endl;
	}
}