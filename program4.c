#include<stdio.h>
int main() {//swapping of numbers without using 3rd variable
int a;
int b;
printf("enter a");
scanf("%d", &a);
printf("enter b");
scanf("%d", &b);
printf("\n before swapping the values are %d\n 5\n", a, b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping the values are %d\n%d\n", a,b);


return 0;
}