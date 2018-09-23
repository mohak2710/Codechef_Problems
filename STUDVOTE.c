#include<stdio.h>
int main()
{
    int t,n,k,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        int x[n+1],c=0,count=0;
        for(i=1;i<n+1;i++)
        {scanf("%d",&x[i]);}
        for(i=1;i<n+1;i++)
        {
            count=0;
            for(j=1;j<n+1;j++)
            {
                if(x[j]==i&&j==i)
                {
                    count=0;
                    break;
                }
                if(x[j]==i&&j!=i)
                    count++;
            }
        if(count>=k)
            c++;
        }
    printf("%d\n",c);
    }
return 0;
}
