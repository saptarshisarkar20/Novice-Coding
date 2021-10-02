//C++ implementation of Twosum by niyalimukherjee
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,t;
    s=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>t;
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if((arr[i]+arr[j])==t)
               cout<<"["<<i<<","<<j<<"]";
       }
    }
 
}
