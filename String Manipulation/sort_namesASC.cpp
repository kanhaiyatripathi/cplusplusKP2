#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    string arr[n+1];
    cout<<"Enter the names : ";
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        arr[i]=x;
    }
    sort(arr,arr+n);
    cout<<"Names in alphabetic order : "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
} 