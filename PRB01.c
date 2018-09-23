#include<stdio.h>
int main()
{
    int t,i,n,j,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        count=0;
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
                count++;
        }
        if(count==2)
            printf("yes\n");
        else
            printf("no\n");
    }
return 0;
}
