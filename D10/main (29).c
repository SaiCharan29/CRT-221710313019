#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,j,r,s=8;
    scanf("%d",&n);
    printf("%d ",s);
    for(i=1;i<n;i++)
    {
        r=i*(((s)*i)-(i+1));
        printf("%d ",r);
        s=r;
    }
    return 0;
}
