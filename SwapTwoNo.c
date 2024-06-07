#include <stdio.h>
//Code to swap value of two numbers using two variable
int main()
{
    int a, b;

    printf("Enter first number:");
    scanf("%d", &a);

    printf("\nEnter second number:");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nYour 1st swaped no:%d", a);
    printf("\nYour 2nd swaped no:%d", b);

    return 0;
}