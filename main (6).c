#include <stdio.h>
int main ()
{
  char s[10], s1[10];

  scanf ("%s", s);
  scanf ("%s", s1);

  printf ("s=%s\n", s);
  printf ("s1=%s\n", s1);

  printf ("s=%s\t", s);
  printf ("s1=%s\n", s1);

  printf ("s=%s\b", s);
  printf ("s1=%s\n", s1);

  printf ("s=%s\r", s);
  printf ("s1=%s\n", s1);
}
