#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str,strrev="";
	cout<<"Enter the string: ";
	getline(cin,str);
	string substr="";
	map<string,int>mapp;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==' ')
		{
			mapp[substr]++;
			substr="";
			continue;
		}
		substr=substr+str[i];
	}
	cout<<"Unique Words : ";
	map<string,int>::iterator it;
	for(it=mapp.begin();it!=mapp.end();it++)
	{
		cout<<it->first<<" ";
	}
	cout<<endl;
}