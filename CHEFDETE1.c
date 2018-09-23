#include<stdio.h>
int main()
{
    long int n,i,x;
    scanf("%ld",&n);
    long int a[n+1];
    for(i=1;i<=n;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%ld",&x);
        a[x]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
            printf("%ld ",i);
    }
return 0;
}
