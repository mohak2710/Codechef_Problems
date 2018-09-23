#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        int x,reverse=0,n,i,sum=0;
        for(i=a;i<=b;i++)
        {
            n=i;
            x=i;
            while(n!=0)
            {
                reverse=reverse*10;
                reverse=reverse+n%10;
                n=n/10;
            }
        if(reverse==x)
            sum+=i;
        reverse=0;
        }
    printf("%d\n",sum);
    }
return 0;
}
