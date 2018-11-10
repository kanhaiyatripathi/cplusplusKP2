#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	int n;
	string number;
	cout<<"Enter the number : "<<endl;
	cin>>number;
	int length=number.length()-1;
	cout<<"Expanded Form : ";
	for(int i=1;i<=number.length();i++)
	{
		cout<<(number[(i-1)]-'0')*pow(10, length);
	    if(i<number.length())
	    		cout<<"+";
	    length--;
	}
	cout<<endl;
	
}