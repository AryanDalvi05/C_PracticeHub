#include<stdio.h>
/* Program to Check Whether a Number N
is entered by user is Palindrome or Not*/
int main() 
{ 
    int a,i,r,original;

    printf("Enter the number:");
    scanf("%d", &a);

    original=a;
    
    r=0;
    while(a>0){
        i=a%10;
        r=r*10+i;
        a=a/10;
    }

    if(r==original)
    printf("%d is a palindrome", original);

    else
    printf("%d is not a palindrome", original);

    return 0;

}