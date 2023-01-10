#include<stdio.h>

int main() {//print first 10 prime no
    int i=1,j=1,n=0,count=0;

    while(n<10) {
        j=1;
        count=0;
        while(j<=i) {
            if(i%j==0) 
            count++;
            j++; 
        }
        if(count==2) {
            printf("%d\n",i);
            n++;
        }
        i++;
    }
        return 0;
}
        
    
