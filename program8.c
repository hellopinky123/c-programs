#include<stdio.h> //swapping of nos without using 3rd variable
int main() {
    int a,b;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d\n", a,b);


}