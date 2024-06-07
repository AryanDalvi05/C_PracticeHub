#include<stdio.h>
//Average of 3 numbers
int main() 
{
  int a,b,c,d;
  printf("Enter first number:");
  scanf("%d", &a);

  printf("\nEnter second number: ");
  scanf("%d", &b);

  printf("\nEnter third number: ");
  scanf("%d", &c);

  d = (a+b+c)/3;

  printf("\nThe average is: %d", d);
  return 0;

}