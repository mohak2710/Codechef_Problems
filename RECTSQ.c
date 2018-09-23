#include <stdio.h>
int hcf(long int a,long int b);
int main()
{
    int t,y;
    long int m,n,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld%ld",&n,&m);
        x=m*n;
        y=hcf(m,n);
        printf("%ld\n",x/(y*y));
    }
return 0;
}
int hcf(long int a,long int b)
{
    if(a%b==0)
        return(b);
    else
        return(hcf(b,a%b));
}
