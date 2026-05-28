// Write a program to Calculate sum of first N natural numbers
#include<stdio.h>
int main (){
    int n,i,sum=0;
    // input value for n numbers 
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum of %d natural numbers is :%d",n,sum);
    return 0;
}