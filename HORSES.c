#include<stdio.h>
int main()
{
    int n,i,j,t,tmp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        long long int x[n];
        for(i=0;i<n;i++)
        {scanf("%lld",&x[i]);}
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(x[j]>x[j+1])
                {
                    tmp=x[j];
                    x[j]=x[j+1];
                    x[j+1]=tmp;
                }
            }
        }
        printf("%lld",x[1]-x[0]);
    }
return 0;
}
