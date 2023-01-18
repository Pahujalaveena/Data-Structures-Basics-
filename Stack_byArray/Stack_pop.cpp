#include<iostream>
#include<conio.h>
#define size 10
int ele,n;
char ch;
using namespace std;

int main()
{
	int stack[6]={1,2,3,4,5,6};
	int top=6;
	
	while(ch!='N')
	{
		cout<<"Do you want to pop an element:";
		cin>>ch;
		
		if(ch=='Y')
		{
			if(top==-1)
			{
				cout<<"Stack is underflow!"<<endl;
				break;
			}
		else
			{
				ele=stack[top];
				top--;
				cout<<"The deleted element is:"<<ele<<endl;
			}
		}
	}
	
	cout<<"The stack is :"<<endl;
	for(int i=0;i<=top;i++)
	{
		cout<<stack[i]<<" ";
	}
}