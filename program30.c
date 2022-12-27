#include<stdio.h>
int main() {

    int i=1,n,fact=1;
    printf("enter any number :");
    scanf("%d", &n);

    while(i<=n) {
        fact=fact*i;
        printf("%d\n",i);
        i++;

    }
    printf("%d\n", fact);


    return 0;
}