#include <bits/stdc++.h> 
using namespace std; 
int main()
{
	string sentence;
	cout<<"Enter the string : ";
	getline(cin,sentence);
	cout<<"Enter the word to search : ";
	string search;
	size_t pos;
	cin>>search;
	pos = sentence.find(search);
	if (pos != std::string::npos)
		std::cout << "sentence contains " << search << std::endl;
	else
		std::cout << "sentence does not contains " << search << std::endl;

	return 0;
}