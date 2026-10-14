#include<stdio.h>
int main(void){
    int myChar;
    printf("Please input a character:");
    myChar=getchar();
    printf("The character you input is:");
    putchar(myChar);
    return 0;
}