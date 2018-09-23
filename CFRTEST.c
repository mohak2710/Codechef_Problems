#include<stdio.h>
int main()
{
    int t,n,i,j,count=0,tmp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int x[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
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
        count=0;
        for(i=0;i<n-1;i++)
        {
            if(x[i]==x[i+1])
                count++;
        }
    printf("%d\n",n-count);
    }
return 0;
}
