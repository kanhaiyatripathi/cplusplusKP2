#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	double area,perimeter,a,b,c,s;
	cout<<"Enter the 1st of traingle :";
	cin>>a;
	cout<<"Enter the 2nd of traingle :";
	cin>>b;
	cout<<"Enter the 3rd of traingle :";
	cin>>c;
	perimeter=(a+b+c);
	s=perimeter/2;
	area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
	cout<<"Area  : "<<area<<"\nPerimeter : "<<perimeter<<endl;
}