#include <stdio.h>
int main ()
{
  char name[10];
  char college[10];
  char branch[10];
  scanf ("%s\n%s\n%s", name, college, branch);
  printf ("name = %s\nbranch = %s\nCollege = %s", name, branch, college);
  return 0;
}