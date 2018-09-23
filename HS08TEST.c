#include<stdio.h>
int main(void)
{
    int w;
    float b,o;
    scanf("%d",&w);
    scanf("%f",&b);
    if(w%5==0&&(w+0.50)<b)
    {
        o=b-w-0.50;
        printf("%.2f",o);
    }
    else if(w%5!=0)
    {
        printf("%.2f",b);
    }
    else if((b<w+0.50))
    {
        printf("%.2f",b);
    }
    return 0;

}
