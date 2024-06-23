#include<stdio.h>
/*
1        1
12      21
123    321
1234  4321
*/
int main()
{
    int i, j, k, l;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d",j);
        }

        for (k = 4; k >= i; k--)
        {
            printf("  ");
        }
        for (l = i; l >= 1; l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    return 0; 
}