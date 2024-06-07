#include<stdio.h>

int main()
{
    int a,i,r;

    for(a=1; a<=100; a++)
    {
        r=0;
        for(i=1; i<=a ; i++)
        {
            if(a%i==0)
            r++;
        }
        if(r==2)
        printf("\n%d",a);
    }
    return 0;
}