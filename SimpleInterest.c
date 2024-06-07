#include<stdio.h>
//Accept principal , rate of interest and no of years and calculate SI
int main()
{
    int p,r,t,si;
    
    printf("Enter the principal:");
    scanf("%d", &p);

    printf("Enter the rate of interest:");
    scanf("%d", &r);

    printf("Enter the number of years:");
    scanf("%d", &t);

    si=p*r*t/100;

    printf("\nThe simple interest is %d", si);

    return 0;
}