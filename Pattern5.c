#include<stdio.h>
/*
1
22
333
4444
*/
int main()
{
    int i,j;

    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}