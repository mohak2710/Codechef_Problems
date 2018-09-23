#include<stdio.h>
int main()
{
    int Test_case,i;
    long long N,sum=0;
    scanf("%d",&Test_case);
    for(i=0;i<Test_case;i++)
    {
        scanf("%lld",&N);
    while(N>0)
    {
        sum=sum+(N%10);
        N=N/10;
    }
    printf("%lld\n",sum);
    sum=0;
    }
return 0;
}
