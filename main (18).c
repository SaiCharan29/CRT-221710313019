#include <stdio.h>
int main ()
{   
  int h;
  scanf("%d",&h);
  if(h%3==0 && h%5==0)
  printf("FIZZBIZZ");
  else if(h%5==0)
  printf("BIZZ");
  else if(h%3==0)
  printf("FIZZ");
  else
  printf("no.");
  return 0;
} 