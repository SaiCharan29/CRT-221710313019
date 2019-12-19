//Strong number
#include <stdio.h>
int main ()
{
  int a, b, s = 0, p, r;
  printf ("enter a number\n");
  scanf ("%d", &a);
  b = a;
  while (a != 0)
    {
      r = a % 10;
      p = 1;
      for (int j = 1; j <= r; j++)
	{
	  p = p * j;
	}
      s = s + p;
      a = a / 10;
    }
  if (s == b)
    printf ("strong number\n");
  else
    printf ("not a strong number\n");
}
