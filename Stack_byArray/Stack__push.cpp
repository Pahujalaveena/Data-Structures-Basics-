#include<iostream>
#include<conio.h>
#define size 10
int stack[size],n,ele,top=-1;
char ch;
using namespace std;

int main()
{
	while(ch!='N')
	{
		cout<<"Do you want to push an element:";
		cin>>ch;
		
		if(ch=='Y')
		{
			if(top>=size)
			{
				cout<<"Stack is overflow!"<<endl;
				break;
			}
			else
			{
				cout<<"Enter the element you want to push:";
				cin>>ele;
				top++;
				stack[top]=ele;
			}
		}
	}
	
	cout<<"The stack is:"<<endl;
	for(int i=0;i<=top;i++)
	{
		cout<<stack[i]<<" ";
	}
}