#include <stdio.h>
#define begin main
int begin()
{
int a,b;
scanf("%d %d",&a,&b);
printf("%d",a+~b+1);
return 0;
}