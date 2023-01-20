#include<iostream>
#include<conio.h>
#define size 10
int ele,n;
char ch;
using namespace std;

int main()
{
	 int queue[6]={1,2,3,4,5,6};
	 int front=0,rear=6;
	  while(ch!='N')
	  {
	  	cout<<"Do you want to pop an element (Y/N) :";
	  	cin>>ch;
	  	
	  	if(ch=='Y')
	  	{
	  		if(front==-1 || front ==rear)
	  		{
	  			cout<<"Queue is empty"<<endl;
	  			break;
			}
			else
			{
			
				ele=queue[front];
				front++;
				cout<<"The popped element is "<<ele<<endl;
			}
		}
	  }
	  
	  cout<<"The queue is:"<<endl;
	  for(int i=front ;i<6;i++)
	  {
	  	cout<<queue[i]<<" ";
	  }
}