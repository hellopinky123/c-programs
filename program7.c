#include<stdio.h>
int main() {
    int a=4;
    int b=5;
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d\n %d\n", a,b);
}