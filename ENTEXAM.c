#include<stdio.h>
void mergesort(long long int sum1[],int i,int j);
void merge(long long int sum1[],int i1,int j1,int i2,int j2);
int main()
{
    int t;
    long long int m,x,a,y,n,k,sum,i,j;
    int e;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%d%lld",&n,&k,&e,&m);
        long long int sum1[n-1];
        for(i=0;i<n-1;i++)
        {
            sum=0;
            for(j=0;j<e;j++)
            {
                scanf("%lld",&a);
                sum=sum+a;
            }
        sum1[i]=sum;
        }
        sum=0;
        for(i=0;i<e-1;i++)
        {
            scanf("%lld",&a);
            sum+=a;
        }
        y=sum;
        mergesort(sum1,0,n-2);
		x=sum1[n-k-1]-y+1;
        if(x>m&&x>0)
		{
			printf("Impossible\n");
		}
		else if(x<=m && x>0)
		{
			printf("%lld\n",x);
		}
		else if(x<=0)
		{
			printf("0\n");
		}


    }
return 0;
}
void mergesort(long long int sum1[],int i,int j)
{
    int mid;

    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(sum1,i,mid);
        mergesort(sum1,mid+1,j);
        merge(sum1,i,mid,mid+1,j);
    }
}

void merge(long long int sum1[],int i1,int j1,int i2,int j2)
{
    int temp[10001];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;

    while(i<=j1 && j<=j2)
    {
        if(sum1[i]<sum1[j])
            temp[k++]=sum1[i++];
        else
            temp[k++]=sum1[j++];
    }

    while(i<=j1)
        temp[k++]=sum1[i++];

    while(j<=j2)
        temp[k++]=sum1[j++];

    for(i=i1,j=0;i<=j2;i++,j++)
        sum1[i]=temp[j];
}
