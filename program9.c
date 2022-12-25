#include<stdio.h>
int main() {
    int a=10;
    int b=12;
    b=a++ + ++a;
    printf("%d\n", a);
    printf("%d\n", b);
    
}