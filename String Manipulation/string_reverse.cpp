#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str,strrev="";
	cout<<"Enter the string: ";
	cin>>str;
	cout<<"Reverse string : ";
	for(int i=str.size()-1;i>=0;i--)
		strrev=strrev+str[i];
	cout<<strrev<<endl;
}