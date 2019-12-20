#include <stdio.h>
#include<math.h>
int main()
{
    int n,a=0,m=7,c=1;
    scanf("%d",&n);
    while(c<=n)
    {
       printf("%d ",m);
       m=m+3;
       c++;
       if(c<n)
       {
       printf("%d ",m);
       m=m-2;
       c++;
    }
    }    
    return 0;
}
