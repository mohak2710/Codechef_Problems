#include<stdio.h>
int minimum(int a,int b);
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        char x[100];
        int count1=0;
        int count2=0;
        int j=0;
        scanf("%s",&x);
        while(x[j]!='\0')
        {
            if(x[j]=='a')
                count1++;
            else if(x[j]=='b')
                count2++;
        j++;
        }
    printf("%d\n",minimum(count1,count2));
    }
    return 0;
}
int minimum(int count1,int count2)
{
    int m=0;
    if(count1>count2)
        m=count2;
    else
        m=count1;
return m;
}
