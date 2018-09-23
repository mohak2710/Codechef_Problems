#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,y,m,days,mod;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        y=(x-2001)/4;
        m=x-2001-y;
        days=(m*365)+(y*366);
        mod=days%7;
        printf("%d",mod);
        if(x>2001)
        {switch(mod)
        {
            case 0:
                printf("Monday\n");
                break;
            case 1:
                printf("Tuesday\n");
                break;
            case 2:
                printf("Wednesday\n");
                break;
            case 3:
                printf("Thursday\n");
                break;
            case 4:
                printf("Friday\n");
                break;
            case 5:
                printf("Saturday\n");
                break;
            case 6:
                printf("Sunday\n");
                break;
            default :
                printf("Invalid\n" );

        }}
    else
    {
        switch(mod)
        {
            case 0:
                printf("Sunday\n");
                break;
            case 1:
                printf("Saturday\n");
                break;
            case 2:
                printf("Friday\n");
                break;
            case 3:
                printf("Thursday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Tuesday\n");
                break;
            case 6:
                printf("Monday\n");
                break;
            default :
                printf("Invalid\n" );
    }


    }}
return 0;
}
