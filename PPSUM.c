#include<stdio.h>
int sum(int d,int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d,n;
        scanf("%d%d",&d,&n);
        printf("%d\n",sum(d,n));

    }
return 0;
}
int sum(int d,int n)
{
    if(d!=0)
    {
        int v=0,i;
        for(i=n;i>=1;i++)
            v+=i;
            n=v;
        return sum(d-1,n);
    }
    else
        return n;

}
