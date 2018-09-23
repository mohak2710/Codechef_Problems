    #include<stdio.h>
    int main()
    {
        int t,year,rem,leap,i,j;
        scanf("%d",&t);
        while(t--)
        {
            leap=0;
            scanf("%d",&year);
            rem=year-1900;
            for(i=1900;i<year;i++)
            {
                if((i%4==0&&i%100!=0)||(i%400==0))
                    leap++;
            }
            rem=rem+leap;
            printf("%d",rem);
            j=rem%7;
            switch(j)
            {
                case 0:printf("monday\n");break;
                case 1:printf("tuesday\n");break;
                case 2:printf("wednesday\n");break;
                case 3:printf("thursday\n");break;
                case 4:printf("friday\n");break;
                case 5:printf("saturday\n");break;
                case 6:printf("sunday\n");break;
            }
        }
        return 0;
    }
