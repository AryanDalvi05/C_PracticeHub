#include<stdio.h>
//Code to find factors of a number
int main()
{
    int a,i;

    printf("Enter any number:");
    scanf("%d", &a);

    for(i=1 ; i<=a; i++)
    {
      if(a%i==0)
      printf("\n%d is factor",i);
    }

    return 0;
}