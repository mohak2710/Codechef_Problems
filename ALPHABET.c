#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char w[100];
    int i,j,n,count;
    scanf("%s",s);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",w);
        count=0;
        for(i=0;i<strlen(s);i++)
        {
            for(j=0;j<strlen(w);j++)
            {
                if(s[i]==w[j])
                    count++;


            }
        }
        if(count==strlen(w))
            printf("Yes\n");
        else
            printf("No\n");
    }
return 0;
}
