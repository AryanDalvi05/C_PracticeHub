#include<stdio.h>
//Code to compute quotient and remainder
int main()  
{
  int a,b,quo,remain;
  
  printf("Enter the dividend:");
  scanf("%d", &a);

  printf("Enter the divisor:");
  scanf("%d", &b);

  quo=a/b;
  printf("\n%d is the quotient", quo);

  remain=a%b;
  printf("\n%d is the remainder", remain);

  return 0;
  
  }