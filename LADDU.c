#include<stdio.h>
#include<string.h>
int main()
{
    int t,a,x,laddu,months,bonus;
    char ori[10],activity[20];
    scanf("%d",&t);
    while(t--)
    {
        laddu=0;
        scanf("%d",&a);
        scanf("%s",ori);
        while(a--)
        {
            scanf("%s",activity);
            if (strcmp(activity,"CONTEST_WON")==0)
            {
                laddu+=300;
                scanf("%d",&x);
                if(x<20)
                laddu=laddu+(20-x);
            }
            else if (strcmp(activity,"TOP_CONTRIBUTOR")==0)
            {
                laddu+=300;
            }
            else if (strcmp(activity,"BUG_FOUND")==0)
            {
                scanf("%d",&x);
                laddu+=x;

            }
            else if (strcmp(activity,"CONTEST_HOSTED")==0)
            {
                laddu+=50;
            }

        }
        if (strcmp(ori,"INDIAN")==0)
            printf("%d\n",(laddu/200));
        else
            printf("%d\n",(laddu/400));
    }
return 0;
}
