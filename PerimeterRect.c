#include <stdio.h>
/*code for perimeter of rectangle*/
int main()
{
  int l,b,area;
  printf("Enter length of rectangle:");
  scanf("%d" ,&l);

  printf("Enter width of rectangle:");
  scanf("%d" ,&b);

  area= 2*(l+b);

  printf("Perimeter of rectangle: %d\n" , area);

}