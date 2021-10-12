#include<stdio.h>

int main(){
    int n, arr[1000], sum=0 ;
    scanf("%d",&n) ;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]) ;
    }
    for(int i=0;i<n;i++){
        sum += arr[i] ;
    }
    printf("Sum of given numbers is = %d",sum) ;
}