#include<stdio.h>
int main()
{
     int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int fact=1;
        int n;
        scanf("%d",&n);
        while(n>0)
        {
            fact*=n;
            n--;
        }
        printf("%llu\n",fact);
    }
return 0;
}
