#include<stdio.h>
int main()
{
    int t,i,n,sum=0,a[7],j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
{
        scanf("%d",&n);
        i=0;
        do
        {
            a[i]=n%10;
            n=n/10;
            i++;
        }
        while(n>0);
        sum=a[0]+a[i-1];
        printf("%d\n",sum);
}
    return 0;

}
