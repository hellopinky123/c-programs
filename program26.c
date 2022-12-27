#include<stdio.h>
int main() {


    int i=0,n;
    printf("enter the number :");
    scanf("%d", &n);
    int sum=0;
    while(i<=n) {
        sum=sum+i;
        printf("%d\n", i);
        i++;

    }
    printf("%d\n", sum);
}
   

