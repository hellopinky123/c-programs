#include<stdio.h>
int main() {//to calculate simple calculator

char op;
printf("enter the operator :");
scanf("%c", &op);
int n1,n2;
printf("enter n1 :");
scanf("%d", &n1);
printf("enter n2 :");
scanf("%d", &n2);

switch(op) {
    case '+':printf("%d+%d=%d", n1,n2,n1+n2);
    break;
    case '-':printf("%d-%d=%d", n1,n2,n1-n2);
    break;
    case '*':printf("%d*%d=%d", n1,n2,n1*n2);
    break;
    case '/':printf("%d/%d=%d", n1,n2,n1/n2);
    break;
    default:printf("invalid operator");


}

}