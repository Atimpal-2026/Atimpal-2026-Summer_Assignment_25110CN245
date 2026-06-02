// Write a program to Check whether a number is palindrome.
#include<stdio.h>
int main(){
    int n,temp,rev=0,l;
    printf("enter a number :");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        l=temp%10;
        rev=rev*10+l;
        temp=temp/10;
    }
    if(n==rev)
    printf("number is palindroome");
    else
    printf("number is not palindrome");
    return 0;
}