#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d,c,l;
        scanf("%d%d%d",&c,&d,&l);
        if(l%(4*(c+d))==0)
            printf("Yes\n");
        else if(l%(4*d)==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
return 0;
}
