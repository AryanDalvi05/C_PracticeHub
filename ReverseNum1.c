#include<stdio.h>
//Code to reverse a two digit number
int main()
{
  int a,b,c,d;

  printf("Enter any two digit no:");
  scanf("%d",&a);

  b=a%10;
  c=a/10;
  d=b*10+c;

  printf("\nThe reversed number is:%d",d);

  return 0;

}