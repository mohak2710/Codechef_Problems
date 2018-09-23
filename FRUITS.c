#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n,m,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        if(abs(n-m)>k)
            printf("%d\n",abs(n-m)-k);
        else
            printf("0\n");
    }
}
