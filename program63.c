#include<stdio.h>//to print * in rhombus pattern

int main() {
    int i,j,rows;
    printf("enter no of rows :");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++) {
        for(j=1;j<=rows-i;j++) {
            printf(" ");

        }
        for(j=1;j<=rows;j++) {
            printf("*");
        }
        printf("\n");
    }

}