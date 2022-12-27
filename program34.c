#include<stdio.h>

int main() {

    int i,sum=0,n;
    printf("enter number :");
    scanf("%d", &n);
    for(i=0;i<=n;i++) {
        sum=sum+i;
        printf("%d\n", i);

    }
    printf("%d", sum);
}