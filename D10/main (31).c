
#include <stdio.h>
#include<math.h>
int main ()
{
  int k, i , j ,m, n;
  scanf("%d",&m);
  if(m>=5&&m<=15)
  {
  for (i=1; i<=m; i++)
    {
        for(j=1;j<=m-i;j++)
        {
            printf(" ");
        }
      for (k = i; k >= 1; k--)
	{
	  printf ("%d", k);
	}
      printf ("\n");
    }}
  return 0;
}
