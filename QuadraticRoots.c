#include <stdio.h>
#include <math.h>
/*Program which accepts coefficients of a
quadratic equation from the user and displays the roots
(both real and complex roots depending upon the
discriminant).*/

int main()
{
  float a, b, c;
  float discriminant, root1, root2, realpart, imaginary;

  printf("Enter the coefficient of a , b and constant:");
  scanf("%f%f%f", &a, &b, &c);

  discriminant = (b * b - 4 * a * c);

  if(a==0)
  printf("It is a linear equation so it has no roots");

  else if (discriminant > 0)
  {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Roots are real and different.\n");
    printf("Root 1 = %.2f\n", root1);
    printf("Root 2 = %.2f\n", root2);
  }

  else if (discriminant == 0)
  {
    root1 = -b / (2 * a);
    root2 = -b / (2 * a);
    printf("Roots are real and same.\n");
    printf("Root 1 = %.2f\n", root1);
    printf("Root 2 = %.2f\n", root2);
  }
  
   
  else 
  {
    realpart = -b / (2 * a);
    imaginary = sqrt(-discriminant) / (2 * a);
    printf("Roots are complex and different.\n");
    printf("Root 1 = %f + %.2fi\n", realpart, imaginary);
    printf("Root 2 = %f - %.2fi\n", realpart, imaginary);
  }
  return 0;
}