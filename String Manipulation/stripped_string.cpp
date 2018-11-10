#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str,substr="";
	char delim;
	cout<<"Enter the string: ";
	getline(cin,str);
	int i=0;
	while(str[i]==' ')
	{
		i++;
	}
	int j=str.size()-1;
	while(str[j]==' ')
	{
		j--;
	}
	string string_out="";
	while(i<=j)
	{
		string_out=string_out+str[i];
		i++;
	}
	cout<<"Stripped string : ";
	cout<<string_out<<endl;
}