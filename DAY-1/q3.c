// Write a program to Find factorial of a number.
#include<stdio.h>
int main(){
    int n,i;
    // input the number 
    printf("enter the number :");
    scanf("%d",&n);
    int fact=1;
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("factorial of the number is : %d",fact);
    return 0;
}