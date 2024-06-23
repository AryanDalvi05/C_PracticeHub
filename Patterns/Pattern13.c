#include<stdio.h>
/*
A        A
AB      BA
ABC    CBA
ABCD  DCBA
*/
int main()
{
    int i, j, k, l;

    for (i = 65; i <= 68; i++)
    {
        for (j = 65; j <= i; j++)
        {
            printf("%c",j);
        }

        for (k = 68; k >= i; k--)
        {
            printf("  ");
        }
        for (l = i; l >= 65; l--)
        {
            printf("%c",l);
        }
        printf("\n");
    }
    return 0; 
}