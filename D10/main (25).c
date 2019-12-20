#include <stdio.h>
#include<math.h>
int main()
{
    int n,a=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       a=(a*10)+3;
       printf("%d",a);
       if(i<n)
       printf("+");
    }
    return 0;
}
