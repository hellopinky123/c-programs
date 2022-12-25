#include<stdio.h>
int main() {//swapping of two nos using 3rd variable
int a;
int b;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d", &b);
int c=a;
a=b;
b=c;
printf("%d\n%d\n", a, b);


}