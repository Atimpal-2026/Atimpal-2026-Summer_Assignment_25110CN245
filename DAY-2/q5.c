// Write a program to Find sum of digits of a number
#include<stdio.h>
int main(){
    int n,i,sum=0,r;
    printf("enter the number :");
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("sum of the digits is:%d",sum);
    return 0;
}