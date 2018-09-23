#include<stdio.h>
int main()
{
    int n,reverse=0,x,t,i;
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
        x=n;
        while(n!=0)
        {
            reverse=reverse*10;
            reverse=reverse+n%10;
            n=n/10;
        }
        if(reverse==x)
            printf("wins\n");
        else
            printf("losses\n");
        reverse=0;
        }
return 0;

}
