#include<stdio.h>

int main()
{
    int a,i,r;

    printf("Enter any number:");
    scanf("%d",&a);

    r=0;
    for(i=1; i<=a; i++)
    {
        if(a%i==0)
        r++;
    }
     if(r==2)
     printf("Prime");

     else
     printf("Not Prime");

     return 0;
}