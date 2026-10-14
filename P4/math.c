#include <math.h>
#include <stdio.h>

void PrintMultiTable(void)
//This function prints the multiplication table on the screen

{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}
float Hypotenuse(float a, float b)
//this function calculates the hypotenuse of a right triangle given the lengths of the other two sides
{
    if (a <= 0 || b <= 0)
    {
        printf("Error: Both sides must be positive numbers.\n");
        return -1; // Return an error value
    }
    float c;
    c = sqrt((a * a) + (b * b));
    return c;
}

float AreaOfTriangle(float a, float b, float c)
//this function calculates the area of a triangle given the lengths of all three sides
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Error: All sides must be positive numbers.\n");
        return -1; // Return an error value
    }
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Error: The given sides do not form a valid triangle.\n");
        return -1; // Return an error value
    }
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;

}

int  main(void)
{
    PrintMultiTable();
    float a, b, c;
    printf("Enter the lengths of the two sides of a right triangle: ");
    scanf("%f %f", &a, &b);
    float hypotenuse = Hypotenuse(a, b);
    if (hypotenuse != -1)
    {
        printf("The length of the hypotenuse is: %.2f\n", hypotenuse);
    }

    printf("Enter the lengths of all three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    float area = AreaOfTriangle(a, b, c);
    if (area != -1)
    {
        printf("The area of the triangle is: %.2f\n", area);
    }

    return 0;
}