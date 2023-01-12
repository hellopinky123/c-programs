#include<stdio.h>

int main() {//print * as right angle format

int i,j,n;
printf("enter value of n:");
scanf("%d", &n);

for(i=1;i<=n;i++) {
    for(j=1;j<=i;j++) {
    printf("*");

}
printf("\n");
}


return 0;
}
