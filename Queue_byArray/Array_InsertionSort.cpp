#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array!"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array!"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        int j=i+1;
        while(arr[j]>key && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"the sorted array is !"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
    

    return 0;
}