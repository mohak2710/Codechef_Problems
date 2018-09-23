#include<stdio.h>
int main()
{
    int test_case,N,i,h,a,j,k;
    int hcf(int,int);
    scanf("%d\n",&test_case);
    while(test_case>0)
    {
        scanf("%d",&N);
        int x[N],y[N];
        for(i=0;i<N;i++)
        {scanf("%d",&x[i]);
        y[i]=x[i];
        }
        for(j=0;j<N-1;j++)
            {
                     h=hcf(y[j],y[j+1]);
                     y[j+1]=h;
            }
        for(k=0;k<N;k++)
            {
               printf("%d ",x[k]/h);
            }
    printf("\n");
   test_case--;
   }
    return 0;

}
 int hcf(int a,int b)
         {
              if(a%b==0)
               {
                      return b;
               }
              else
              {
                      return(hcf(b,a%b));
              }
         }
