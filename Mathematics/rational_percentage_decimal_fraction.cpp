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
int gcd(int a, int b)  
{  
    if (a == 0 || b == 0)  
        return 0;       
    if (a == b)  
        return a;   
    if (a > b)  
        return gcd(a-b, b);  
    return gcd(a, b-a);  
}
int main() 
{ 
	string str;
	cout<<"Enter the Rational Number (a/b) : ";
	pair<int,int> num;
	cin>>str;
	num=fraction(str);
	int gcd_fraction=gcd(num.first,num.second);
	cout<<"Percentage : ";
	cout<<((double)num.first/(double)num.second)*100<<endl;
	cout<<"Decimal : "<<(double)num.first/(double)num.second<<endl;
	cout<<"Fraction : "<<num.first/gcd_fraction<<"/"<<num.second/gcd_fraction<<endl;
}