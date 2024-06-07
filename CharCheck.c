#include<stdio.h>
#include<math.h>
//To check if a character is digit,letter or special character
// A-Z: 65-90
// a-z: 97-122
// 0-9: 48-57
// Special symbols: 1-47 , 58-64 , 91-96 ,123-255
int main() 
{
  char ch;
  
  printf("Enter any character:");
  scanf("%c" , &ch);

  if(ch>=65 && ch<=90)
  printf("\n%c is a capital letter", ch);

  else if (ch>=97 && ch<=122)
  printf("\n%c is small letter" , ch);

  else if(ch>=48 && ch<=57)
  printf("\n%c is a digit" , ch);

  else printf("\n%c is special character", ch);

  return 0;

  }