#include<stdio.h>

int main() {

    int n,c,r,s;
    printf("enter number :");
    scanf("%d", &n);

    c=n;
    while(n>0) {
        r=n%10;
        s=s+(r*r*r*r);
        n=n/10;

    }
    if(c==s) {
        printf("armstrongno");
    } 
    else {
        printf("not armstrongno");
    }
}