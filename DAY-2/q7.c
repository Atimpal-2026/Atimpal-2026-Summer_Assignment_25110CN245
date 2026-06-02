// Write a program to Find product of digits. 
#include<stdio.h>
int main (){
    int n,m=1,l;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0){
        l=n%10;
        m=m*l;
        n=n/10;
    }
    printf("multiplication is :%d ",m);
    return 0;
}    