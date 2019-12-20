#include <stdio.h>
int main ()
{
  char ch[30];
  puts ("enter your name");
  //gets (ch);
  scanf("%[^\n]s",ch);
  puts ("your name is");
  puts (ch);
  return 0;
}
