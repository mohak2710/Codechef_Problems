#include <stdio.h>
int comp(const int *a,const int *b){
    int l=*(int*)a;
    int m=*(int*)b;
    return(l-m);
}

int main() {
    long int n,i;
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%ld",&n);
	    long long int a[n],count;
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	    }
	    qsort(&a,n,sizeof(a[0]),comp);
	    for(i=0;i<(n-1);i++){
	        if(a[i]==a[i+1]){
	            count=a[i];
	        }
	    }
	    if(a[0]!=(a[1]-1)){
	        count=a[0];
	    }
	    if(a[n-1]!=(a[n-2]+1)){
	        count=a[n-1];
	    }
	 printf("%lld\n",count);
	}
	return 0;
}
