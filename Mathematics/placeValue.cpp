#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string number;
    cout<<"Enter the number : ";
    cin>>number;
    int length=number.size()-1;
    for(int i=1;i<=number.size();i++)
    {
        cout<<"Place value for "<<number[i-1]<<" : ";
        cout<<(int)pow(10, length)<<endl;
        length--;
    }
} 