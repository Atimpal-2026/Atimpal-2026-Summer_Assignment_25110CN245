// Write a program to Count digits in a number.
#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("enter the number :");
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        temp=temp/10;
        c+=1;
    }
    printf("number of the digits in the given number is :%d",c);
    return 0;
}