#include<iostream>
#include<conio.h>
#define size 10
int queue[size],front=-1,rear=-1,ele;
char ch;
using namespace std;

int main()
{
	while(ch!='N')
	{
		cout<<"Do you want to add an element (Y/N):";
		cin>>ch;
		
		if(ch=='Y')
		{
			
	if(rear==size && front ==0)
	{
		cout<<"Queue is full!"<<endl;
	}
	else
	{
		cout<<"Enter the element you want to add:";
		cin>>ele;
		rear++;
		queue[rear]=ele;
	}
	
	
		}
	}
	
	cout<<"The queue is:"<<endl;
	for(int i=0;i<=rear;i++)
	{
	   cout<<queue[i]<<" ";	
	}
}