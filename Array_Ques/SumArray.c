#include<stdio.h>
int main()  
{ 
    int a[5],i,s;

    for(i=0; i<5; i++)
    {
        printf("Enter the number:");
        scanf("%d", &a[i]);
    }

    s=0;
    for(i=0; i<5; i++)
    {
        s=a[i]+s;
    }
    printf("%d", s);
}