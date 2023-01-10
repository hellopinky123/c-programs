#include<stdio.h>
main() {
    int count=1,num,sum;
    printf("enter any no :");
    scanf("%d", num);
    while(count<=num) {
        if(num%count==0) {
            sum=sum+count;
            count++;
        }
    }
        if(sum==num) {
            printf("%d is perfect no",num);
        }
        else {
            printf("%d is not perfect no",num);
        }
    

    }
