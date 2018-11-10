#include <bits/stdc++.h> 
using namespace std; 
double findMean(int a[], int n) 
{ 
    int sum = 0; 
    for (int i = 0; i < n; i++)  
        sum += a[i]; 
      
    return (double)sum/(double)n; 
} 
double findMedian(int a[], int n) 
{ 
    sort(a, a+n); 
    if (n % 2 != 0) 
       return (double)a[n/2]; 
    return (double)(a[(n-1)/2] + a[n/2])/2.0; 
} 
int findMode(int a[], int n) 
{ 
    int mode,freq=0;
    map<int,int> mapp; 
    for(int i=0;i<n;i++)
    {
        mapp[a[i]]=mapp[a[i]]+1;
    }
    map<int, int>::iterator it;
    for (it = mapp.begin(); it != mapp.end(); it++)
    {
        if(it->second>freq)
        {
            freq=it->second;
            mode=it->first;
        }
    }
    return mode;
} 

int main() 
{ 
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the numbers : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    cout << "Mean = " << findMean(arr, n) << endl;  
    cout << "Median = " << findMedian(arr, n) << endl;  
    cout << "Mode = " << findMode(arr, n) << endl;  
    return 0; 
} 