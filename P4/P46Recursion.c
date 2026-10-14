/* Recursion */
#include<stdio.h>

long f(int n);
// This function returns the factorial of n.

long Fabonacci(int i);
// This function returns the i-th term of ...

long f(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*f(n-1);
    }
}

long Fabonacci(int i){
    if(i==1 || i==2){
        return 1;
    }
    else{
        return Fabonacci(i-2)+Fabonacci(i-1);
    }
}

int main(void){
    printf("f(3)=%d\n",f(3));
    return 0;
}