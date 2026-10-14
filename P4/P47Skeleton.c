/* Skeleton of the C program */

/* PART 1. FILE INCLUSIONS */
#include<stdio.h>
#include<math.h>

/* PART 2. MACRO DEFINITIONS */
#define PI 3.14
#define MAX(x1,x2) ((x1)>(x2)?(x1):(x2))

/* PART 3. TYPE DEFINITIONS */
// No user types in this program.

/* PART 4. GLOBAL VARIABLES */
// No global variables in this program.

/* PART 5. FUNCTION DECLARATIONS */
float Max(float x1,float x2);
/* Max(x1,x2) returns the greater one of x1 and x2. */

float AreaOfCircle(float r);
/* This function returns the area of a circle.
 * r is the radius of the circle.
 * PI=3.14 is predefined as a macro.
 */

float Hypotenuse(float a,float b);
/* This function returns the hypotenuse of a right triangle. 
 * The parameters a>0 and b>0 are the two legs of the triangle.
 * #include <math.h>
 */

void PrintMulTable(void);
/* This function prints the multiplication table on the screen. */

/* PART 6. FUNCTION IMPLEMENTATIONS */
float Max(float x1,float x2){
    return x1>x2?x1:x2;
}

float AreaOfCircle(float r){
    return PI*r*r;
}

float Hypotenuse(float a,float b){
   return sqrt(a*a+b*b);
}

void PrintMulTable(void){
   int i,j;
   
   for(i=1;i<=9;i++){
       for(j=1;j<=i;j++){
           printf("%d*%d=%2d\t",j,i,i*j);
       }
       putchar('\n');
    }
}

/* PART 7. THE MAIN FUNCTION */
int main(void){
    float a=3,b=4,c,area;
    printf("Max(%f,%f)=%f\n",a,b,Max(a,b));
    printf("MAX(%f,%f)=%f\n",a,b,MAX(a,b));
    c=Hypotenuse(a,b);
    area=AreaOfCircle(c/2);
    printf("a=%.2f,b=%.2f,c=%.2f\n",a,b,c);
    printf("The area of the circumcircle: %f.\n",area);
    return 0;
}