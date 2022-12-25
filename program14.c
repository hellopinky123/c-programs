#include<stdio.h>
int main() {

    int no;
    printf("enter number :");
    scanf("%d", &no);

    if(no>0) {
        printf("positive\n");
    }
    else if(no<0) {
        printf("negative\n");
    }
    else {
        printf("equals to zero");

    }
}