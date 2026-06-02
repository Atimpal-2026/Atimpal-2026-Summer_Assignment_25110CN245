// Write a program to Reverse a number.
#include<stdio.h>

int main() {
    int n, l, ans = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0) {
        l = n % 10;        
        ans = ans * 10 + l;
        n = n / 10;        
    }

    printf("Reversed number = %d", ans);

    return 0;
}