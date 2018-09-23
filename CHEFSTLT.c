#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        char s1[101],s2[101];
        int max=0,min=0;
        scanf("%s",s1);
        scanf("%s",s2);
        for(i=0;i<strlen(s1);i++)
        {
            if(s1[i]=='?'||s2[i]=='?')
                    max=max+1;
            if(s1[i]!='?'&&s2[i]!='?'&&s1[i]!=s2[i])
            {
                max=max+1;
                min=min+1;
            }

        }
    printf("%d %d\n",min,max);
    }
return 0;
}
