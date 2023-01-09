#include<stdio.h>

int main() {
	
	int num,rev=0;
	printf("enter any no:");
	scanf("%d", &num);
	
	while(num != 0)  {
	
	rev=(rev*10) + (num%10);
	num=num/10;

}
    printf("reverse is %d",rev);

    return 0;
}