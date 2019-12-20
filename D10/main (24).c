#include <stdio.h>
#include<math.h>
int main()
{
    int a,r,st,n,s=0,i=0,m=1;
    scanf("%d",&a);
    st=a;
    n=a;
    while(a!=0)
    {
        a=a/10;
        i++;
    }
    while(n!=0)
    {
        r=n%10;
        s=s+pow(r,i);
        n=n/10;
    }
    if(st==s)
    printf("armstrong\n");
    else
    printf("not an armstrong");
    return 0;
}
