#include <stdio.h>
#include<math.h>
int main()
{
    int n,a=0,m=80,l=10,c=1;
    scanf("%d",&n);
    while(c<=n)
    {
       printf("%d ",m);
       m=m-10;
       c++;
       if(c<n)
       {
       printf("%d ",l);
       l=l+5;
       c++;
    }
    }    
    return 0;
}
