#include<stdio.h>
//Code to calculate sum of reverse of any number using loop
int main()
{
  int a,i,r;

  printf("Enter any number:");
  scanf("%d", &a);

  r=0;
  while(a>0)
  {
    i=a%10;
    r=r+i;
    a=a/10;
  }

  printf("\n%d",r);

}
  



