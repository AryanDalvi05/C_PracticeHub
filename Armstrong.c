#include<stdio.h>
#include<math.h>
/*  Program to check whether a number entered
by the user is an Armstrong number or not.  */
int main()  
{ 
    int num,originum,remainder,a,sum;

    printf("Enter any number:");
    scanf("%d", &num);

    originum = num;
    
    a=0;
    while(originum != 0)
    {
        originum = originum / 10;
        a++;
    }

    originum = num ;
    
    sum=0;
    while(originum > 0)
    {
        remainder = originum % 10;
        sum = sum + pow(remainder,a);
        originum = originum / 10;
    }

    if(sum == num)
    printf("%d is a Armstrong number", num);

    else
    printf("%d is not a Armstrong number", num);

    return 0;
}