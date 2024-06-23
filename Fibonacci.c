#include<stdio.h>
//Code to print Fibonacci series of entered nth terms. It is sum of two preceding terms.
int main()  
{ 
    int n,i;
    int t1=0, t2=1, nextterm;

    printf("Enter the number of terms:");
    scanf("%d", &n);

    printf("Fibonacci Series:");

    for(i=1; i<=n; i++) 
    {
        printf("%d, ", t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    
  return 0;

}