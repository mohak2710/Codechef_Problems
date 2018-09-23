#include<stdio.h>
int main()
{
    int t,n,k,i,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&k);
        x=n%k;
        printf("%d\n",x);
    }
return 0;
}
