#include<iostream>
#include<conio.h>
#define size 10
int arr[size],ele;
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements:"<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	if(n==-1)
	{
		cout<<"Array is empty:"<<endl;
	}
	else
	{
		ele=arr[n];
		cout<<"The deleted element is:"<<ele<<endl;
		n=n-1;
	}
	
	cout<<"The array after deletion is:"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
}