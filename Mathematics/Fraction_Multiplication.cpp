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
	int n;
	string str1,str2;
	cout<<"Enter the fractions (a/b)"<<endl;
	cin>>str1;
	cin>>str2;
	pair<int,int> num1,num2;
	num1=fraction(str1);
	num2=fraction(str2);
	int lcm=(num1.second*num2.second)/gcd(num1.second,num2.second);
	cout<<"Multiplication : "<<endl;
	int result_num=num1.first*num2.first,result_den=num1.second*num2.second;
	int gcd_result=gcd(result_num,result_den);
	cout<<result_num/gcd_result<<"/"<<result_den/gcd_result<<endl;
}