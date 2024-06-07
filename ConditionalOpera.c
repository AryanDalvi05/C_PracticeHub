#include<stdio.h>
//Using conditional operation "?:" to find greater number between two
int main()
{
 int a,b;

 printf("Enter 1st number:");
 scanf("%d", &a);

 printf("Enter 2nd number:");
 scanf("%d", &b);

 (a>b ? printf("%d is greater", a):
  a<b ? printf("%d is greater", b):
  printf("Equal"));
}