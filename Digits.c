#include<stdio.h>
//Code to check if a number is single,double,triple or multiple digit
int main() 
{
  int x;

  printf("Enter any number: ");
  scanf("%d", &x);

  if(x>=0 && x<10)
  printf("\n%d is single digit", x);

  else if(x>=10 && x<100)
  printf("\n%d is double digit", x);

  else if(x>=100 && x<1000)
  printf("\n%d is triple digit", x);

  else printf("\n%d is multiple digit", x);

  return 0;
}