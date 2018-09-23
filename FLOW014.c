#include<stdio.h>
int main()
{
    int t,i;
    float h,cc,ts;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f%f%f",&h,&cc,&ts);
        if(h>50&&cc<0.7&&ts>5600)
            printf("10\n");
        else if(h>50&&cc<0.7)
            printf("9\n");
        else if(cc<0.7&&ts>5600)
            printf("8\n");
        else if(h>50&&ts>5600)
            printf("7\n");
        else if(h>50||cc<0.7||ts>5600)
            printf("6\n");
        else if(h<50&&cc>0.7&&ts<5600)
            printf("5\n");
    }
return 0;
}
