#include <stdio.h>
//Code to check if the given alphabet is a vowel or a consonant
int main()
{
  char ch;

  printf("Enter the alphabet:");
  scanf("%c", &ch);
  
   if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    printf("%c is a vowel.\n", ch);

  else printf("%c is a consonant.", ch);
  
  return 0;
}