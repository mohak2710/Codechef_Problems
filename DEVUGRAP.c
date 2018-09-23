#include<stdio.h>
int main()
{
    int t;
    long long int n,k,i,op;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        long long int a[n];
        op=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if((a[i]%k)<((k/2)+1))
                op+=a[i]%k;
            else
                op+=k-(a[i]%k);
        }
    printf("%lld\n",op);
    }
return 0;
}
