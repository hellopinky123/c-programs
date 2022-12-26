#include<stdio.h>
int main() {


    int s1,s2,s3,s4,s5;
    printf("enter five subject marks :");
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);
    scanf("%d", &s4);
    scanf("%d", &s5);
    int avg=(s1+s2+s3+s4+s5)/5;

    if(avg>=90 && avg<=100) {
        printf("o grade");
    } else if(avg>=80 && avg<=89) {
        printf("A grade");
    } else if(avg>=70 && avg<=79) {
        printf("B grade");
    } else if(avg>=60 && avg<=69) {
        printf("C grade");
    } else if(avg>=50 && avg<=59) {
        printf("D grade");

    } else if(avg>=40 && avg<=49) {
        printf("E grade");

    } else {
        printf("fail");
    }

}