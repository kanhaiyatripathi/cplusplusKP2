#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str;
	int length;
	cout<<"Enter the string: ";
	cin>>str;
	cout<<"Enter the length of substrings : ";
	cin>>length;
	cout<<"substrings : "<<endl;
	for(int i=0;i<=str.size()-length;i++)
	{
		cout<<str.substr(i,length)<<" ";
	}
	cout<<endl;
	
}