#include<stdio.h>
#include<math.h>

float AreaOfTriangle(float a,float b,float c);
/* This function finds the area of a triangle.
 * Input: three sides a, b,c
 * Return: the area of the triangle if it is legal,
 *         -1 if not.
 * Note: #include<math.h>
 */

float AreaOfTriangle(float a,float b,float c){
    float p,area;
    if(a<=0 || b<=0 || c<=0
            || a+b<=c || a+c<=b || b+c<=a){
        return -1;
    }
    p=(a+b+c)/2;
    area=sqrtf(p*(p-a)*(p-b)*(p-c));
    return area;
}

/* Test */
int main(void){
    float a,b,c,step=1,area;
    int i,j,k,max=6;

    for(i=0,a=-2;i<max;i++,a+=step){
        for(j=0,b=-1;j<max;j++,b+=step){
            for(k=0,c=0;k<max;k++,c+=step){
                area=AreaOfTriangle(a,b,c);
                if(area<0){
                    printf("a=%f,b=%f,c=%f,Illegal.\n",
                           a,b,c);
                }
                else{
                    printf("a=%f,b=%f,c=%f,area=%f\n",
                           a,b,c,area);
                }
            }
        }
    }
    
    return 0;
}