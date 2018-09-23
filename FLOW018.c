#include<stdio.h>
int factorial(int);
int main()
{
    unsigned long long  t,x,i;
    unsigned long long fact;
    scanf("%llu",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%llu",&x);
        fact=factorial(x);
        printf("%llu\n",fact);
    }
return 0;
}
int factorial(int x)
{
    unsigned long long j,f=1;
    for(j=x;j>=1;j--)
    {
    f=f*j;
    }
    return f;
}
