#include<stdio.h>
#include<math.h>
/*Program to Calculate Power of a Number
using inbuilt pow() function by taking two inputs from
users as Base and exponent respectively*/
int main()  
{ 
    int base,power,num;

    printf("Enter the base:");
    scanf("%d", &base);

    printf("Enter the exponent:");
    scanf("%d", &power);

    num =  pow(base,power);

    printf("%d raised to power %d is %d", base,power,num);

    return 0;
}