#include<stdio.h>
int main()
{
int t,n,x;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    x=n%8;
    if(x==1)
        printf("%dLB\n",n+3);
    else if(x==2)
        printf("%dMB\n",n+3);
    else if(x==3)
        printf("%dUB\n",n+3);
    else if(x==4)
        printf("%dLB\n",n-3);
    else if(x==5)
        printf("%dMB\n",n-3);
    else if(x==6)
        printf("%dUB\n",n-3);
    else if(x==7)
        printf("%dSU\n",n+1);
    else
        printf("%dSL\n",n-1);
}
return 0;
}
