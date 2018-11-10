#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int count=0;
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
    }
    cout<<"Vowels : "<<count<<endl;
} 