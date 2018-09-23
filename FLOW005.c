#include<stdio.h>
int main()
{
    int t,i,n,x=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        x=0;
        x+=n/100;
        n=n%100;
        x+=n/50;
        n=n%50;
        x+=n/10;
        n=n%10;
        x+=n/5;
        n=n%5;
        x+=n/2;
        n=n%2;
        x+=n/1;
        n=n%1;
        printf("%d\n",x);
    }
return 0;
}
