#include<stdio.h>
/*Area of circle*/
void main()
{
    float rad,area;
    printf("Enter radius of circle:");
    scanf("%f", &rad);

    area= 3.14*rad*rad;

    printf("Area of circle: %f\n" , area);

    }