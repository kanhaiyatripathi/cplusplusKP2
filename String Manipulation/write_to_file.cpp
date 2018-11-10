#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	string filename="",str;
	cout<<"Enter the full path with file name : ";
	cin>>filename;
	ofstream myfile;
	myfile.open (filename.c_str());
	cout<<"Enter the text to write : ";
	cin>>str;
	myfile <<str<<endl;
	myfile.close();
	return 0;
} 