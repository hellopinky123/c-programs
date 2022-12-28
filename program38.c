#include<stdio.h>
int main() {//check a no is pallindrome or not


int n,num,rev=0;
printf("enter any number to check pallindrome :");
scanf("%d", &n);
num=n;

while(n!=0) {
    rev=(rev*10)+(n%10);
    n=n/10;

}
if(rev==num) {
    printf("pallindrome");

} 
else {
    printf("not pallindrome");
    
}



}