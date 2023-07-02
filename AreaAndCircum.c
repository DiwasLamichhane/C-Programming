//WAP to find area and circumference of circle

#include<stdio.h>
# define PI 3.14
void main()
{
    float r, area, circumference;
    printf("Enter the radius :");
    scanf("%f", &r);
    circumference = 2*PI*r*r;
    area = PI*r*r;
    printf("The circumference of the circle of %.2f radius is %.2f\n", r, circumference);
    printf("The area of the circle of %.2f radius is %.2f\n", r, area);
}
