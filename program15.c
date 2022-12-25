#include<stdio.h>
int main() {//no is divisible by 5 or 11

int n;
printf("enter no :");
scanf("%d", &n);

if(n%5==0) {
    printf("divisible by 5\n");
}
else {
    printf("not divisible by 5\n");

} 
if(n%11==0) {
    printf("divisible by 11\n");

} else {
    printf(" not divisible by 11\n");
}



}
