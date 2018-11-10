#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string filename="",str;
	cout<<"Enter the full path with file name : ";
	cin>>filename;
	ofstream myfile;
	myfile.open (filename.c_str());
	cout<<"Enter the string: ";
	cin>>str;
	if(str[0]>='a'&&str[0]<='z')
		str[0]=str[0]-32;
	myfile <<str<<endl;
	myfile.close();
	return 0;
} 