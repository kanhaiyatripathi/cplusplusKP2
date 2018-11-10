#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str,substr="";
	char delim;
	cout<<"Enter the string: ";
	getline(cin,str);
	cout<<"Enter the delimeter : ";
	scanf("%c",&delim);
	vector<string> mapp;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==' '||str[i]=='.'||str[i]==','||str[i]=='!')
		{
			mapp.push_back(substr);
			substr="";
			continue;
		}
		substr=substr+str[i];
	}
	cout<<"Tokenized string : ";
	for(int i=0;i<mapp.size();i++)
	{
		cout<<mapp[i]<<" ";
	}
	cout<<endl;
}