#include<stdio.h>
int main()
{
    long long int t,a,x,count;
    scanf("%lld",&t);
    while(t--)
    {
        count=0;
        scanf("%lld",&a);
        while(a!=0)
        {
            x=a%10;
            a=a/10;
            if(x==4)
                count++;
        }
    printf("%lld\n",count);
    }
return 0;
}
