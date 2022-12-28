#include<stdio.h>
int main() {


    int i,originalNum,num,lastdigit,sum;
    long fact;
    printf("enter any number :");
    scanf("%d", &num);

    originalNum=num;
    sum=0;
    lastdigit=num%10;
    while(num>0) {
        lastdigit=num%10;
        fact=1;
        for(i=1;i<=lastdigit;i++) {
            fact=fact*i;

        }
        sum=sum+fact;
        num=num/10;

    }
    if(sum==originalNum) {
        printf("strong no");

    }
    else {
        printf("not strong");
    }

}