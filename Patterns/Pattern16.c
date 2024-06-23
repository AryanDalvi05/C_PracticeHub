#include <stdio.h>

// 1 *2 *3 *4 *5

int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("%d", i);

        if (i < 5)
        printf(" *");
    }
    return 0;
}