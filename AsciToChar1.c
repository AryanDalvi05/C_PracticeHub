#include<stdio.h>
//Code to check Asci value of character

int main() 
{
    char ch;

    printf("Enter any character:");
    scanf("%c", &ch);

    printf("\nThe ASCII value of %c is %d" , ch, ch);
    return 0;
}