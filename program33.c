#include<stdio.h>

int main() {

    int i,n;
    printf("enter number :");
    scanf("%d", &n);

    for(i=n;i>=1;i--) {
        printf("%d\n", i);
    }
}