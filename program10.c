#include<stdio.h>

int main() {//conversion of f to c
float c,F;
printf("enter temp in fahreneit");
scanf("%f", &F);
c=(F-32) *5/9;
printf("%f fahreneit=%f celcius", F,c);




}