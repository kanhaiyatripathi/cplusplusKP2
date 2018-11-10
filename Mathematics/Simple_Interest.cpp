#include<bits/stdc++.h>
using namespace std;
int main()
{
	int principle,rate,time;
	cout<<"Enter the principle amount : ";
	cin>>principle;
	cout<<"Enter the rate of interest : ";
	cin>>rate;
	cout<<"Enter the time : ";
	cin>>time;
	double si=(principle*rate*time)/100;
	cout<<"Simple interest : "<<si<<endl;
}