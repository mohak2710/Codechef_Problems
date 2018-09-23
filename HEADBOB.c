#include<stdio.h>
int main()
{
    int t,i,n,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        char x[n];
        scanf("%s",x);
        for(j=0;j<n;j++)
        {
            if(x[j]=='Y')
            {
                printf("NOT INDIAN\n");
                break;
            }
            else if(x[j]=='I')
            {
                printf("INDIAN\n");
                break;
            }
            else if(j==n-1)
                printf("NOT SURE\n");

        }
    }
}
