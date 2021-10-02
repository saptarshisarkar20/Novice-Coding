#include<iostream>
using namespace std;

int main(){
  int n;
  int *arr;
  cin>>n;
  arr = new int[n];
  for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  int sum=0;
  for(int i=0;i<n;i++){
     sum+=arr[i];
  }
  cout<<sum;
  return 0; 
}
