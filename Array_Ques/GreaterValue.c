#include<stdio.h>

int main ()  
{ 
    int a[5], i, max;

    for(i=0; i<5; i++)
    {
        printf("Enter the number:");
        scanf("%d", &a[i]);
    }

    max=0;
    for(i=0; i<5; i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("%d", max);

    return 0 ;
}