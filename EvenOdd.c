#include<stdio.h>
#include<math.h>
//Code to if a number is odd or even
int main()
{   
    int x;
    printf("Enter any number:");
    scanf("%d" , &x);
    
    if(x%2==0)
    printf("%d is a even number" , x);

    else
    printf("%d is a odd number", x);
    
    return 0;
}