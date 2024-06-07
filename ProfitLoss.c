#include<stdio.h>
//Accept cost price and selling price, and check whether is it profit or loss 
int main()
{
  int cp,sp;

  printf("Enter cost price:");
  scanf("%d",&cp);

  printf("Enter selling price:");
  scanf("%d",&sp);

  if(cp>sp)
  printf("It is a loss");

  else if(cp<sp)
  printf("It is a profit");

  else
  printf("It is neither profit nor loss");

  return 0;
} 
