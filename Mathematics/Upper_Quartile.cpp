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
    cout<<"Upper Quartile : "<<endl;
    for(int i=(int)(0.75*n);i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 