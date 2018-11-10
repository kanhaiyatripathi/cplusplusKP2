#include <bits/stdc++.h> 
using namespace std; 
bool compare(string &a,string &b) 
{ 
    return (a.size() > b.size()); 
} 
int main() 
{ 
    int n;
    cout<<"Enter the number of words : ";
    cin>>n;
    string arr[n+1];
    cout<<"Enter the words : ";
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        arr[i]=x;
    }
    sort(arr,arr+n,greater<int>());
    cout<<"Words in descending order of length: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
} 