#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int m,x,y,count=0;;
        scanf("%d%d%d",&m,&x,&y);
        int a[m],i,j,k,p,q;
        int house[101];
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<101;i++)
        {
            house[i]=-1;
        }
        for(i=0;i<m;i++)
        {
            p=a[i]-(x*y);
            q=a[i]+(x*y);
            if(p<1)
                p=1;
            if(q>100)
                q=100;
            for(j=p;j<=q;j++)
            {
                house[j]=1;
            }
        }
        for(k=1;k<101;k++)
        {
            if(house[k]==-1)
                count++;
        }
    printf("%d\n",count);
    }
return 0;
}
