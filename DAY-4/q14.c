//Write a program to Find nth Fibonaci series
#include<stdio.h>

int main() {
    int n, i, first = 0, second = 1, next;

    printf("Enter nth term: ");
    scanf("%d", &n);

    if (n == 0)
        printf("0");
    else if (n == 1)
        printf("1");
    else {
        for (i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth Fibonacci term is %d", n, second);
    }

    return 0;
}