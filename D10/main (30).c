
#include <stdio.h>
#include<math.h>
int main ()
{
  int k, i = 5, j = 1, n;
  for (n = 5; n > 0; n--)
    {
      for (k = n; k <= i; k++)
	{
	  printf ("%d ", k);
	}
      printf ("\n");
    }
  return 0;
}
