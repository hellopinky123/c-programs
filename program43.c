#include<stdio.h>//to find angles of triangle where two angles are given   

int main() {

    int a,b,c;
    printf("enter two angles :");
    scanf("%d", &a);
    scanf("%d", &b);

    c=180-(a+b);
    printf("third angle of triangle=%d",c);

    return 0;
}

