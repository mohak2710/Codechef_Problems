#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        long int a,b;
        scanf("%ld%ld",&a,&b);
        if(a==b)
            printf("=\n");
        else if(a>b)
            printf(">\n");
        else
            printf("<\n");
    }
return 0;
}
