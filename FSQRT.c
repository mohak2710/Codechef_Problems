#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n,sqrt;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        sqrt=pow(n,0.5);
        printf("%d\n",sqrt);

    }
}
