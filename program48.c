#include<stdio.h>


int main() {

    int n1,n2,i,min,hcf=1;
    printf("enter any no :");
    scanf("%d %d" ,&n1, &n2);

    min=(n1<n2) ? n1 : n2;

    i=1;
    while(i<=min) {
        i++;
        if(n1%i==0 && n2%i==0) {
            hcf=i;
        }
    }
    printf("hcf between this is %d %d is %d\n ",n1,n2,hcf);



}