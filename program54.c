#include<stdio.h>

int main() {
    int i,num,sum=0;
    printf("enter any no :");
    scanf("%d", &num);


    
    for(i=1;i<num;i++) {

        if(num%i==0) 
            sum=sum+i;
    }
        
        if(sum==num) 
            printf("%d is perfect no",num);
        
        else 
            printf("%d is not perfect no",num);
        
    

    return 0;
}