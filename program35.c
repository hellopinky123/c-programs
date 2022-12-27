#include<stdio.h>
int main() {//enter any number & print cube till that number


    int i,n;
    printf("enter number :");
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        printf("cube is %d\n", i*i*i);
    }
}