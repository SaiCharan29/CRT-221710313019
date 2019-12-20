#include <stdio.h>
int main ()
{
 char ch;
 puts("enter a character");
 ch=getc(stdin);
 fflush(stdin);
 puts("Entered character is");
 putc(ch,stdout);
 return 0;
}
