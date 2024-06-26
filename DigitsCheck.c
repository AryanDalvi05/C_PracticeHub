#include<stdio.h>
//Code to print number of digits in a given number
int main() 
{ 
    int num,result,a;

    printf("Enter any number:");
    scanf("%d", &num);

    a=0;
    while(num != 0)
    {
     num = num/10;
     a++;   
    }

    printf("The number of digits in this number are %d", a);

    return 0;
}