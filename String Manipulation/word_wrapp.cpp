#include <bits/stdc++.h> 
using namespace std;
string textWrap(string str, int location) 
{
    int n = str.rfind(' ', location);
    if (n != std::string::npos) 
    {
        str.at(n) = '\n';
    }
    return str;
} 
int main() 
{ 
	string str,substr="";
	int length,count=0;
	cout<<"Enter the string: ";
	getline(cin,str);
	cout<<"Enter the word wrap length : ";
	cin>>length;
	string out=textWrap(str,length);
	cout<<out<<endl;
}