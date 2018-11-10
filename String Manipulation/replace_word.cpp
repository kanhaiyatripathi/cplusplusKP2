#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string str,substr="",word,new_word;
	cout<<"Enter the string: ";
	getline(cin,str);
	cout<<"Enter the word to replace : ";
	cin>>word;
	cout<<"Enter the new word : ";
	cin>>new_word;
	vector<string> mapp;
	for(int i=0;i<str.size();i++)
	{
		int j=0,k=i;
		while(k<str.size()&&j<word.size()&&str[k]==word[j])
		{
			k++;
			j++;
		}
		if(j==word.size())
		{
			int l=0;
			for(k=i;k<(i+j);k++)
				str[k]=new_word[l++];
			i=k;
		}

	}
	cout<<"Replaces String : "<<endl;
	cout<<str<<endl;
}