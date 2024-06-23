#include<stdio.h>
//Code to Find Largest Number Among Three Numbers entered by users
int main ()  
{ 
    int no1,no2,no3;

    printf("Enter 1st number:");
    scanf("%d", &no1);

    printf("Enter 2nd number:");
    scanf("%d", &no2);

    printf("Enter 3rd number:");
    scanf("%d", &no3);

    if(no1>no2 && no1>no3)
    printf("%d is the greatest", no1);

    else if(no2>no1 && no2>no3)
    printf("%d is the greatest", no2);

    else 
    printf("%d is the greatest", no3);

    return 0;
}