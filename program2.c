#include<stdio.h>
int main() {//maximum of two nos using ternary operator
    int a;
    int b;
    int max;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    max=(a>b)? a:b;
    printf("%d", max);
    return 0;
    
}