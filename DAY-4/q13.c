//Write a program to Generate Fibonacci series.
#include<stdio.h>
int main (){
    int i,first=0,second=1,next,n;
    printf("enter the number of terms \n");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        if(i<=1)
        next=i;
        else{
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d,",next);
    }
    return 0;
}