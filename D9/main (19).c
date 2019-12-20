#include <stdio.h>
int main ()
{
  int a, b, c;
  scanf ("%d%d%d", &a, &b, &c);
  if (a == c && a == b)
    printf ("Equilateral");
  else if (a == b || a == c || b == c)
    printf ("Isosceles");
 else if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a)
  printf("Right angled");
  else				//if(a!==b&&b!=c&&a!=c)
    printf ("Scalene");
}
