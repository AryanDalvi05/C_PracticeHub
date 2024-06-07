#include<stdio.h>
//Code to reverse any number using loop
int main()
{
  int a,i,r;

  printf("Enter any number:");
  scanf("%d", &a);

  r=0;
  while(a>0)
  {
    i=a%10;
    r=r*10+i;
    a=a/10;
  }

  printf("\n%d",r);

}
  



