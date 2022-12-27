#include<stdio.h>
int main() {


    int i=1,n;
    printf("enter no :");
    scanf("%d", &n);

    if(n%2==0) {
        while(i<=n) {
            if(i%2==0) 
                printf("%d\n", i);
                i++;
        }
    }
            
            else {
                while(i<=n) {
                    if(i%2 != 0) 
                        printf("%d\n", i);
                        i++;
                    }
                }
            }
        
    
