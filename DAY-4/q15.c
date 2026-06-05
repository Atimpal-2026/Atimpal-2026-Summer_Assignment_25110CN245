//write a programme to check armstrong number
#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,original,rem,count=0,result=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        count+=1;
        temp=temp/10;
    }
    original=n;
    while(original!=0){
        rem=original%10;
        result+=pow(rem,count);
        original=original/10;
    }
    if(result==n){
        printf("%d is an armstrong number.\n",n);
    }
    else{
        printf("%d is not an armstrong number.\n",n);
    }
    return 0;
}