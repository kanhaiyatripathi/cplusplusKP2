#include <bits/stdc++.h> 
using namespace std; 
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
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	cout<<"gcd : "<<gcd(a,b)<<endl;
}