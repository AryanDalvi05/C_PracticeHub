    #include<stdio.h>
    //Code to find factorial of any number
    int main()
    {
        int a,i,r;

        printf("Enter the number:");
        scanf("%d", &a);

        r=1;
        for(i=1; i<=a; i++)
        {
            r=r*i;
        }
        printf("\n%d",r);

        return 0;

    }