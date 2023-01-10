#include<stdio.h>

int main() {
    int i=1,num,sum=0;
    printf("enter any no :");
    scanf("%d", num);
    while(i<num) {
        if(num%i==0) {
            sum=sum+i;
            i++;

        }
        if(sum==num) {
            printf("%d is perfect no");
        }
        else {
            printf("%d id not perfect no");
        }
    }
}