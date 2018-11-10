#include<bits/stdc++.h>
using namespace std;
int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	cout<<"Multiples : "<<endl;
	for(int i=1;i<=100;i++)
	{
		cout<<i*number<<" ";
	}
	cout<<endl;
}