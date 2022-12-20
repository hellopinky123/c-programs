#include<stdio.h>//swapping of two numbers
int main() {
    int a;
    int b;
    printf("enter a :");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    printf("before swapping of the values are %d\n %d\n", a, b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("\n after swapping values are %d\n %d\n", a,b);


}