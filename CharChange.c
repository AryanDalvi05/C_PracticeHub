#include<stdio.h>
//Code to change small letter to capital letter and vice versa
int main()
{
  char ch;

  printf("Enter any letter:");
  scanf("%c", &ch);

  if(ch>=65 && ch<=90) //To change capital to small letter
  ch=ch+32;

  else if(ch>=97 && ch<=122) //To change small to capital letter
  ch=ch-32;

  printf("The vice versa is %c", ch);

  return 0;
}