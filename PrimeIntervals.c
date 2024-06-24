#include<stdio.h>
/*Program to Display Prime Numbers Between
Two Intervals (entered by user) */
int main()  
{ 
   int lower,upper,i,j,flag;

   printf("Enter the lower limt:");
   scanf("%d", &lower);

   printf("Enter the upper limit:");
   scanf("%d", &upper);

   for(i=lower; i<=upper; i++)
   {
    if(i==1 || i==0)
    continue;
   
   flag = 1;

   for(j=2; j*j<=i; j++)
   {
     if(i%j==0)
     {
        flag=0;
        break;
     }
   }

   if(flag==1)
   printf("%d, ",i);
   }
}