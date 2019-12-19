#include <stdio.h>
int main ()
{
  int op, a, c, m, bal = 1000, p, pin = 1034;
  printf ("enter pin\n");
  scanf ("%d", &p);
  if (p == pin)
    {
      printf("select your option\n 1)Balance enquiry \n2)Deposit \n3)Withdraw \n4)Exit \n ");
      scanf ("%d", &op);
      switch (op)
	{
	case 1:
	  printf ("Balance=%d", bal);
	  break;
	case 2:
	  printf ("enter amount\n");
	  scanf ("%d", &c);
	  if (c % 100 == 0)
	    {
	      bal = bal + c;
	      printf ("Balance=%d", bal);
	    }
	  else
	    {
	      printf ("Deposit failed");
	    }
	  break;
	case 3:
	  printf ("enter amount\n");
	  scanf ("%d", &m);
	  if (m % 100 == 0)
	    {
	      if (bal - m >= 500)
		{
		  bal = bal - m;
		  printf ("Balance=%d", bal);
		}
	      else
		printf ("Withdraw failed");
	    }
	  else
	    {
	      printf ("Withdraw failed");
	    }
	  break;
	case 4:
	  break;
	default:
	  printf ("invalid option\n");
	  break;
	}
    }
  else
    printf ("invalid pin\n");
}
