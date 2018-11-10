#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the characters : ";
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        arr[i]=x;
    }
    sort(arr,arr+n);
    cout<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
} 