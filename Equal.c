#include<stdio.h>
//Code to check if the two entered numbers are equal .
int main() 
{ 
    int num1,num2;

    printf("Enter 1st number:");
    scanf("%d", &num1);

    printf("Enter 2nd number:");
    scanf("%d", &num2);

    if(num1 == num2)
    printf("They are equal");

    else
    printf("They are not equal");

    return 0;
}