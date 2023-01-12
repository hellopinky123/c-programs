#include<stdio.h>
int main() {

    int i,j,n,count;
    printf("enter any no :");
    scanf("%d", &n);
    for(i=2;i<=n;i++) {
        count=0;
        for(j=2;j<i;j++) {
            if(i%j==0) 
                count++;
        }
        if(count==0) 
        printf("%d\n",i);

    }
    return 0;

}