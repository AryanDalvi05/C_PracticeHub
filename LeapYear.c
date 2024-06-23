#include<stdio.h>
//Code to check if the entered year is leap year or not
/*Every year that is exactly divisible by four is a leap year, except for 
years that are exactly divisible by 100, but these centurial years are leap years 
if they are exactly divisible by 400.*/
int main()  
{ 
    int a;

    printf("Enter the year: ");
    scanf("%d", &a);

    if(a%4==0 && a%100!=0 || a%400==0)
    printf("%d is a leap year", a);

    else
    printf("%d is not a leap year", a);

    return 0;

}