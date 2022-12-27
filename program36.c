#include<stdio.h>

int main() {//count even nos upto that number

    int i=1,n,count=0;
    printf("enter number :");
    scanf("%d", &n);
    while(n>=1) {
        if(n%2==0) {
            count=count+1;

        }
        n--;
    }
    printf("%d\n", count);
}