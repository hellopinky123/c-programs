#include<stdio.h>//conversion of cm to meter & km



int main() {
    float cm,meter,km;
    printf("enter the length in centimeter :");
    scanf("%f", &cm);

    meter=cm/100.0;
    km=cm/100000.0;

    printf("length in meter=%2f\n",meter);
    printf("length in kilometer=%2f\n",km);
    return 0;
}





