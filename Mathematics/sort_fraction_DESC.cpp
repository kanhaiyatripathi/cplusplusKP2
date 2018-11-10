#include <bits/stdc++.h> 
using namespace std; 
pair<int,int> fraction(string str)
{
	pair<int,int> result;
	int numer=0,denom=0;
	string num="",den="";
	int i=0;
	while(1)
	{
		if(str[i]=='/')
		{
			i++;
			break;
		}
		num=num+str[i];
		i++;
	}
	while(i<str.length())
	{
		den=den+str[i];
		i++;
	}
	int j=0;
	for(int i=num.size()-1;i>=0;i--)
	{
		numer=numer+(num[i]-'0')*pow(10,j);
		j++;
	}
	j=0;
	for(int i=den.size()-1;i>=0;i--)
	{
		denom=denom+(den[i]-'0')*pow(10,j);
		j++;
	}
	result.first=numer;
	result.second=denom;
	return result;
}
bool compare(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (((double)a.first/(double)a.second) > ((double)b.first/(double)b.second)); 
} 

int main() 
{ 
	int n;
	cout<<"Enter number of inputs : "<<endl;
	cin>>n;
	string str;
	cout<<"Enter the Rational Numbers (a/b)"<<endl;
	vector<pair<int,int> > arr;
	for(int i=0;i<n;i++)
	{
		pair<int,int> num;
		cin>>str;
		num=fraction(str);
		arr.push_back(num);
	}
	sort(arr.begin(),arr.end(),compare);
	cout<<"Sorted array : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i].first<<"/"<<arr[i].second<<" ";
	}
	cout<<endl;
}