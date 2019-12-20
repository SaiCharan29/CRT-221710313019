#include <stdio.h>
int main ()
{                                
  int x;
  scanf("%2d",&x);
  printf("%d",abs((x%10)-(x/10)));
  return 0;
} 