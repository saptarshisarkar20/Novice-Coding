#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        sum+=ar[i];
      
    }
    cout<<sum<<endl;
}