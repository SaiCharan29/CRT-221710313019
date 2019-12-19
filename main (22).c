//Russian multiplication
#include <stdio.h>
int main ()
{
  int a, b, s = 0;
  printf ("enter two numbers\n");
  scanf ("%d%d", &a, &b);
  while (a != 0)
    {
      if (a % 2 != 0)
	s = s + b;
      a = a / 2;
      b = b * 2;
    }

  printf ("%d", s);
}
