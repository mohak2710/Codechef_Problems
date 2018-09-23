#include<stdio.h>
int main()
{
    int t,i,n,reverse=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        reverse=0;
        while(n!=0)
        {
            reverse=reverse*10;
            reverse=reverse+(n%10);
            n=n/10;
        }
        printf("%d\n",reverse);
    }
}
