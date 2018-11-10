#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string str,substr="";
	char delim;
	cout<<"Enter the string: ";
	cin>>str;
	int isalpha=1,isdigit=1;
	for(int i=0;i<str.size();i++)
	{
		if(isalnum(str[i]) == 0)
		{
			isalpha=0;
			break;
		}
	}
	for(int i=0;i<str.size();i++)
	{
		if(str[i]<='9'&&str[i]>='0')
		{
			isdigit=0;
			break;
		}
	}
	if(isalpha==1)
		cout<<"String is alphanumeric"<<endl;
	else if(isdigit==1)
		cout<<"String is alphabetic"<<endl;
	else
		cout<<"String is neither alphanumeric or alphabetic"<<endl;
}