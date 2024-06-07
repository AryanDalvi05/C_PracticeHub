#include<stdio.h>
//Code to swap two numbers using third variable
int main()
{
  int a,b,c;

  printf("Enter first number:");
  scanf("%d", &a);

   printf("Enter second number:");
  scanf("%d", &b);

  c=a;
  a=b;
  b=c;

  printf("First swaped no: %d", a);

  printf("\nSecond swaped no: %d", b);

  return 0;  
}