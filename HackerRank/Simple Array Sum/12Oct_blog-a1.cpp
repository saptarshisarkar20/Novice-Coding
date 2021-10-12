#include <bits/stdc++.h>
using namespace std;

int getsum(int a[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)    s+=a[i];
    return s;
}

int main()
{
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<getsum(a,n)<<endl;return 0;
}
