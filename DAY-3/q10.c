// Write a program to Print prime numbers in a range
#include<stdio.h>
int main(){
    int n,i,j,val=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        val=0;
        for(j=2;j<i;j++){
            if(i%j==0)
            val=1;
        }
        if (val==0)
        printf("%d \n",i);

    }
    return 0;
}