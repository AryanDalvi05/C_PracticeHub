#include<stdio.h>
// copy 
int main()  
{
  float a,b,c;
  int d;

  printf("1-Area of triangle \n2-Area of circle \n3-Area of rectangle");
  printf("\nEnter your choice:");
  scanf("%d" , &d);

  switch(d)
  {
    case 1:
    printf("\nEnter base and height of triangle: ");
    scanf("%f%f" , &a,&b);
    c=0.5*a*b;
    printf("\nArea of triangle: %f", c);
    break;

    case 2:
    printf("\nEnter radius of circle: ");
    scanf("%f", &a);
    c=3.14*a*a;
    printf("\nArea of circle: %f", c);
    break;

    case 3:
    printf("\nEnter length and breadth of triangle: ");
    scanf("%f%f" , &a,&b);
    c=a*b;
    printf("\nArea of rectangle: %f", c);
    break;

    default:
    printf("\nYour choice is wrong");
    }

    return 0;

}