#include<stdio.h>
//Code to print LCM of two numbers
// Formula : {LCM= Product of numbers / HCF}
int main() 
{ 
    int num1,num2, min, hcf, i,lcm;

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
    
    lcm= (num1 * num2) / hcf;

    printf("%d is the LCM", lcm);
    
    return 0;
}