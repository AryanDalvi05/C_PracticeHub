#include<stdio.h>
/*
1
12
123
1234
*/
int main()
{
    int i,j;

    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}