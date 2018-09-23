#include<stdio.h>
int main()
{
    int t,n,count,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],b[n];
        for(i=0;i<n;i++)
        {scanf("%d",&a[i]);}
        for(i=0;i<n;i++)
        {scanf("%d",&b[i]);}
        count=0;
        for(i=0;i<n;i++)
        {if(i==0&&(a[i]>=b[i]))
        {count++;}
        else if((a[i]-a[i-1])>=b[i])
        {count++;}
        }
        printf("%d\n",count);
    }
return 0;
}
