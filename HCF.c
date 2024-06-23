#include<stdio.h>
//Code to print HCF of two numbers
int main() 
{ 
    int num1,num2, min, hcf, i;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1,&num2);

    if(num1<=num2)
    {
    min=num1;
    }

    else
    {
    min=num2;
    }
    
    hcf=1;
    for(i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0 )
        hcf = i;
    }
    printf("%d is the HCF", hcf);
    
    return 0;
}