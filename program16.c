#include<stdio.h>
int main() {//check a year is leap year or not

int year;
printf("enter any year");
scanf("%d", &year);

if(year%4==0) {
    printf("year is leap");
}
else {
    printf("year is not leap");
}


}