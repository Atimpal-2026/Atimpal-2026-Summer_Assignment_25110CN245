// Write a program to Find LCM of two numbers
#include<stdio.h>
int main(){
    int a,b,lcm,temp;
    printf("enter two numbers:");
    scanf("%d,%d",&a,&b);
    int m=a*b;
    while(b>0){
        temp=b;
        b=a%b;
        a=temp;    // now this a is the gcd of both the numbers
    }
    lcm=m/a;

    printf("lcm of both numbers is=%d",lcm);
    return 0;
}