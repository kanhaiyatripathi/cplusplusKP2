#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    cout<<"Lower Quartile : "<<endl;
    for(int i=0;i<n/4;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 