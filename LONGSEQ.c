#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        char n[100000];
        int x,i;
        scanf("%s",n);
        x=strlen(n);
        int count1=0,count2=0;
        for(i=0;i<x;i++)
        {
            if(n[i]=='1')
                count1++;
            if(n[i]=='0')
                count2++;
        }
        if(count1==1||count2==1)
            printf("Yes\n");
        else
            printf("No\n");

    }
return 0;
}
