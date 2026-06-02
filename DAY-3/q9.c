// Write a program to Check whether a number is prime
#include<stdio.h>
int main(){
    int n,i,val=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
        val=1;
    }
    if(val==1)
    printf("number is not prime");
    else 
    printf("number is prime");
    return 0;
}