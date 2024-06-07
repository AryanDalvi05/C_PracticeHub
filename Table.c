#include<stdio.h>
//Code to display a table of any number
int main()
{
    int a,b,i;
    
    printf("Enter any number:");
    scanf("%d", &a);

    for(i=1; i<=10; i++)
    {
        b=a*i;
        printf("\n%d",b);
    }
    return 0;

}