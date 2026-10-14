/* User-defined function */
#include<stdio.h>

float Max(float x1,float x2);
// Max(x1,x2) returns the greater one of x1 and x2.

float Min(float x1,float x2);
// Min(x1,x2) returns the less one of x1 and x2.

float Max(float x1,float x2){
    if(x1>x2){
        return x1;
    }
    else{
        return x2;
    }
}

float Min(float x1,float x2){
    return x1<x2?x1:x2;
}

int main(void){
    float a=2.72, b=3.14, c=1.73, y1, y2;
    y1=Max(a,b);
    y2=Min(b,c);
    printf("y1=Max(%f,%f)=%f\n",a,b,y1);
    printf("y2=Min(%f,%f)=%f\n",b,c,y2);
    return 0;
}