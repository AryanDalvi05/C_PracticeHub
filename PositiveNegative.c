#include<stdio.h>
//Code to check if a number is positive or negative
int main()
{
  int a;
  
  printf("Enter any number:");
  scanf("%d", &a);

  if(a>0)
  printf("%d is positive",a);

  else if(a<0)
  printf("%d is negative",a);

  else
  printf("\n0 is neutral");

  return 0;
}