#include<stdio.h>
#include<math.h>//calculation of compound intrest

int main() {

    float p,rate,time,ci;
    printf("enter principle :");
    scanf("%f", &p);
    printf("enter time in year :");
    scanf("%f", &time);

    printf("enter rate :");
    scanf("%f", &rate);

    ci=p* pow((1+rate/100),time);
    printf("ci=%f",ci);
    return 0;




}