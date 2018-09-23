#include<stdio.h>
int main()
{
    int t,i;
    long int bs;
    float hra,da;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&bs);
        if(bs<1500)
        {
            hra=0.1*bs;
            da=0.9*bs;
        }
        else if(bs>=1500)
        {
            hra=500;
            da=0.98*bs;
        }
        printf("%g\n",bs+hra+da);
    }
return 0;
}
