#include<stdio.h>
/*
54321
54321
54321
54321
*/
int main()   
{
    int i,j;

    for(i=1; i<=4; i++)
    {
        for(j=5; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}