#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,b=0,g=0,r=0,i,y=0;
        scanf("%ld",&n);
        char x[100001];
        scanf("%s",x);
        for(i=0;i<n;i++)
        {
            if(x[i]=='B')
                b++;
            else if(x[i]=='G')
                g++;
            else
                r++;
        }
        if(b>g&&b>r)
            y=b;
        else if(g>b&&g>r)
            y=g;
        else
            y=r;
    printf("%ld\n",n-y);
    }
return 0;
}
