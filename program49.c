#include<stdio.h>//to find out sum of nos from 1 to n


int main() {
    int i,n,sum=0;
    printf("enter any no to print that no :");
    scanf("%d", &n);

    for(i=1;i<=n;i++) {
        sum=sum+i;
        printf("%d\n",i);
    }
    printf("%d",sum);
   

    return 0;
}