#include<stdio.h>
int main() {

    int n,i=2,m,flag=0;

    printf("enter the number :");
    scanf("%d", &n);
    m=n/2;
    while(i<=m) {
        if(n%i==0) {
            flag=flag+1;

        }
        i++;
    }
    if(flag==0) {
        printf("prime no");
    }
    else {
        printf("not prime");
    }


    
}