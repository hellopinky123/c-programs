#include<stdio.h>
int main() {//check vowel or consonant


char ch;
printf("enter the character :");
scanf("%c", &ch);
switch(ch) {
    case 'a':
    case 'A':printf("it is a vowel");
    break;
    case 'e':
    case 'E':printf("it is a vowel");
    break;
    case 'i':
    case 'I':printf("it is vowel");
    break;
    case 'o':
    case 'O':printf("it is vowel");
    break;
    case 'u':
    case 'U':printf("it is vowel");
    break;
    default:printf("it is consonant");
}


}