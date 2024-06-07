#include<stdio.h>
//Code to print even numbers from 1 to 20 using if condition
int main()
{
  int a;
  
  for(a=2; a<=20; a++)
  {
   if(a%2==0)
   printf("\n%d",a);
  }
   
  return 0;
}