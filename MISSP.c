#include<stdio.h>
void mergesort(long long int a[],long long int i,long long int j);
void merge(long long int a[],long long int i1,long long int j1,long long int i2,long long int j2);
int main()
{
    int t;
    long long int n,i,j;
    scanf("%d",&t);
    while(t--)
    {
        long long int x=0;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        mergesort(a,0,n-1);
        for(i=0;i<n;i=i+2)
        {
            if(a[i]!=a[i+1])
            {
                x=a[i];
                break;
            }
        }
        printf("%lld",x);

    }
return 0;
}
void mergesort(long long int a[],long long int i,long long int j)
{
    long long int mid;

    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
}

void merge(long long int a[],long long int i1,long long int j1,long long int i2,long long int j2)
{
    long long int temp[100001];
    long long int i,j,k;
    i=i1;
    j=i2;
    k=0;

    while(i<=j1 && j<=j2)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }

    while(i<=j1)
        temp[k++]=a[i++];

    while(j<=j2)
        temp[k++]=a[j++];
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}

