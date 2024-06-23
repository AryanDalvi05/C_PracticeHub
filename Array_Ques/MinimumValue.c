#include<stdio.h>

int main()  
{ 
  int a[5],i ,min;
  
  for(i=0; i<5 ; i++) 
  {
    printf("Enter the numbers: ");
    scanf("%d",&a[i]);
  }

  min=9999;
  for(i=0; i<5; i++)
  {
    if(a[i]<min)
    min=a[i];
  }
  printf("\n%d", min);

  return 0;
}