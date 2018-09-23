#include<stdio.h>
int main()
{
    int t,i,j,k,temp,a[3],x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        for(x=0;x<3;x++)
        {scanf("%d",&a[x]);}
        for(j=0;j<2;j++)
        {
            for(k=0;k<2-j;k++)
            {
               if(a[k]>a[k+1])
               {temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;}
            }
        }
        printf("%d\n",a[1]);
    }
    return 0;
}
