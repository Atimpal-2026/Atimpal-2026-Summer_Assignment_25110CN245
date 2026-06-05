// Write a program to Print Armstrong numbers in a range.
#include<stdio.h>
#include<math.h>
int main(){
    int start,end,temp,original,rem,i,count,result;
    printf("enter the starting number:");
    scanf("%d",&start);
    printf("enter the last number:");
    scanf("%d",&end);
    for(i=start;i<=end;i++){
        temp=i;
        count=0;
        result=0;
        while(temp!=0){
            count+=1;
            temp=temp/10;
        }
        original=i;
        while(original!=0){
            rem=original%10;
            result+=pow(rem,count);
            original=original/10;
        }
        if(result==i){
            printf("%d ",i);
        }

    }
    return 0;
} 
