#include<stdio.h>
int main()
{
    long int n,i,j,count=0;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
            {count++;
            break;}
        }
    if(count==0)
        printf("%ld ",i);
    }
}
