#include<stdio.h>
int main()
{
    int t,i;
    float q,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f%f",&q,&p);
        if(q>1000)
        {
            printf("%f\n",(q*p)-(0.1*q*p));
        }
        else
        {
            printf("%f\n",(q*p));
        }
    }
return 0;
}
