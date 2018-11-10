#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str,strrev="";
	cout<<"Enter the string: ";
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=str[i]+32;	
	}
	cout<<"Lower case string : "<<str<<endl;
}