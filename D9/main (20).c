#include <stdio.h>
int main ()
{
  int op, a, b;
  printf ("select your option\n 1)+ \n2)- \n3)* \n4)/ \n ");
  scanf ("%d", &op);
  printf ("enter two numbers\n");
  scanf ("%d%d", &a, &b);
  switch (op)
    {
    case 1:
      printf ("result=%d", a + b);
      break;
    case 2:
      printf ("result=%d", a - b);
      break;
    case 3:
      printf ("result=%d", a * b);
      break;
    case 4:
      printf ("result=%d", a / b);
      break;
    default:
      printf ("invalid option\n");
      break;
    }
}
