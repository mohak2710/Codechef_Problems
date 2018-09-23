#include<stdio.h>
int main()
{
    int a,b,c,t,sum=0,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d%d%d",&a,&b,&c);
        sum=a+b+c;
        if(a>=40&&b>=40&&c>=40)
            {
                if(sum==180)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        else
            printf("No\n");
    }
return 0;
}
