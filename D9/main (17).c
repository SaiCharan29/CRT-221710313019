#include <stdio.h>
int main ()
{   
  int h;
  scanf("%d",&h);
  if(h<150)
  printf("dwarf");
  else 
  {if(h<165&&h>=150)
  printf("avg height");
  else 
  {if(h<190&&h>=165)
  printf("tall");
  else
  printf("abnormal height");
  }
  }
  return 0;
} 