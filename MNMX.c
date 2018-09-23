#include<stdio.h>
int main()
{
    int t,i,k,key;
    int n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(k=0;k<n;k++)
        {scanf("%d",&a[k]);
        if(k==0)
            key=a[0];
        else if(key>a[k])
            key=a[k];
        }

        printf("%d\n",key*(n-1));
    }
return 0;
}
