#include <stdio.h>
//Using switch case making a calculator for two digits
int main()
{
    int a, b, c;
    char ch;

    printf("Enter 1st number:");
    scanf("%d", &a);

    printf("Enter 2st number:");
    scanf("%d", &b);

    printf("\nA-Addition \nS-Subtraction \nM-Multiplication \nD-Division \n");
    printf("\nEnter your choice:");
    scanf(" %c", &ch);  //Give space before %c

    switch (ch)
    {
    case 'A': // For number: "case 1: "
        c = a + b;
        printf("%d", c);
        break;

    case 'S': // For number: "case 2: "
        c = a - b;
        printf("%d", c);
        break;

    case 'M': // For number: "case 3: "
        c = a * b;
        printf("%d", c);
        break;

    case 'D': // For number: "case 4: "
        c = a / b;
        printf("%d", c);
        break;

    default:
        printf("Wrong choice");
    }

    return 0;
}