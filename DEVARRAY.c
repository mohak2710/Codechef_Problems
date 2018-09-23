#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,q,i,max,min,x;
    scanf("%d%d",&n,&q);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
            max=a[i];
        else if(max<a[i])
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
            min=a[i];
        else if(min>a[i])
            min=a[i];
    }
    for(i=1;i<=q;i++)
    {
        scanf("%d",&x);
        if(x>=min&&x<=max)
            printf("Yes\n");
        else
            printf("No\n");
    }
return 0;
}

