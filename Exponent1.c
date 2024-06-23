#include<stdio.h>
/*Program to Calculate Power of a Number
without using inbuilt pow() function by taking two
inputs from users as Base and exponent respectively */
int main()   
{ 
    float base, power, result;
    int i;

    printf("Enter the base:");
    scanf("%f", &base);

    printf("Enter the exponent:");
    scanf("%f", &power);
    
    result=1;
    for(i=1; i<=power; i++)
    {
      result=result*base;
    }
    printf("%.2f raised to power %.2f is %.2f", base, power, result);

    return 0;
}