#include<stdio.h>

int main() {//sum of all digits of a number

    int n,sum=0;
    printf("enter any number :");
    scanf("%d", &n);

    while(n != 0) {
        sum=sum + n %10;
        n=n/10;

    }
    printf("%d", sum);
}