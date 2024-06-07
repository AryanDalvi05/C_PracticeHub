#include<stdio.h>
//Code to print sum of first n natural numbers

int main()
{
  int num,i,sum;

  printf("Enter no to print sum of:");
  scanf("%d", &num);

  sum=0;
  for(i=1 ; i<=num ; i++)
  {
    sum=sum+i;
  }
  printf("\nSum is %d", sum);
}