#include<iostream> 
using namespace std; 
int modInverse(int a, int m) 
{ 
    a = a%m; 
    for (int x=1; x<m; x++) 
       if ((a*x) % m == 1) 
          return x; 
} 
int main() 
{ 
    int a,m; 
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of m : ";
    cin>>m;
    cout << modInverse(a, m)<<endl; 
    return 0; 
} 