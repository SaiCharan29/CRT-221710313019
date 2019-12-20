#include <stdio.h>
int main()
{
    int a=53,n,c=0;
    scanf("%d",&n);
    while(c!=n)
    {
        printf("%d %d ",a,a);
        a=a-13;
        c++;
    }
    return 0;
}
