#include<stdio.h>
int main()
{
    int t,n,tmp,i,j,area=1,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]<a[j+1])
                {
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        }
        area=1;
        count=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                count++;
                area=area*a[i];
                i++;
            }
        if(count==2)
            break;
        }
        if(count<2)
            printf("-1\n");
        else
            printf("%d\n",area);
    }
return 0;
}
