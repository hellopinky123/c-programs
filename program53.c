#include<stdio.h>

int main() {//print first n fibonacci series
    int n1=0,n2=1,n3,i,no;
    printf("enter the no of element :");
    scanf("%d", &no);

    printf("%d\n %d\n",n1,n2);
    for(i=2;i<no;++i) {
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;

    }
        return 0;
}