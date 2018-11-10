#include<bits/stdc++.h>
using namespace std;
int main()
{
	int firstNumber,secondNumber,thirdNumber,result;
	cout<<"Enter the first number : ";
	cin>>firstNumber;
	cout<<"Enter the second number : ";
	cin>>secondNumber;
		cout<<"Enter the third number : ";
	cin>>thirdNumber;
	result=max(max(firstNumber,secondNumber),thirdNumber);
	cout<<"Maximum Number : "<<result<<endl;
}