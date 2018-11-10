#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str,strrev="";
	cout<<"Enter the string: ";
	getline(cin,str);
	map<char,int>mapp;
	for(int i=0;i<str.size();i++)
	{
		mapp[str[i]]++;
	}
	cout<<"Unique Characters : "<<endl;
	map<char,int>::iterator it;
	for(it=mapp.begin();it!=mapp.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
}