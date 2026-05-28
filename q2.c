// Write a program to Print multiplication table of a given number
#include<stdio.h>
int main(){
    int a,i;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        int m=a*i;
        printf("%d\n",m);
    }
    return 0;
}