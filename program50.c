#include<stdio.h>//check prime no

int main() {

    int i,m,n,flag=0;
    printf("enter num :");
    scanf("%d", &n);

    m=n/2;
    for(i=2;i<=m;i++) {
        if(n%i==0) {
            flag=flag+1;
        }
    }
        if(flag==0) {
            printf("%d is prime no",n);
        }
        else {
            printf("%d is not prime no",n);
        }
    
    return 0;
}

