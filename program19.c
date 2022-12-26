#include<stdio.h>
int main() {//check a triangle is valid or not


int a,b,c;
printf("enter sides :");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

if(a<(b+c)) {
    if(b<(a+c)) {
        if(c<(a+b)) {
            printf("it is a valid triangle");
        } else {
            printf("not a valid triangle");
        }
    } else {
        printf("not a valid triangle");
    }  


} else {
    printf("not a valid triangle");
}
}