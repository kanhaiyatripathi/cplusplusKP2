#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Nearest 1000 numbers : ";
    for(int i=n-500;i<n+500;i++)
    {
        if(i==n)
            continue;
        cout<<i<<" ";
    }

    cout<<endl;
} 