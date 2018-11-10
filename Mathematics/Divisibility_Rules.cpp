#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	int a,b;
	cout<<"Enter the numbers : ";
	cin>>a>>b;
	if(a%b==0)
		cout<<"First number is divisible by second"<<endl;
	else if(b%a==0)
		cout<<"Second number is divisible by first"<<endl;
	else
		cout<<"None of them are divisible by other"<<endl;
}