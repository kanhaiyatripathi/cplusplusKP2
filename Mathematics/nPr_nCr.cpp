#include <bits/stdc++.h> 
using namespace std; 
int factorial(int num)
{
    int fact=1, i;
    for(i=1; i<=num; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main() 
{ 
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"factorial : "<<fact(n)<<endl;
}