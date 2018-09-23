#include <stdio.h>

int main() {
	int test_case,n,k,i;
	scanf("%d",&test_case);
	while(test_case--){
	    scanf("%d%d",&n,&k);
	    int sumt=0,t[n],d[n],sum=0,count=0;
	    for(i=0;i<n;i++){
	        scanf("%d%d",&t[i],&d[i]);
	    }
	    for(i=0;i<n;i++){
	        sumt+=t[i];
	        if(count==0&&sumt>k){
	            sum+=((sumt-k)*d[i]);
	            count=1;
	            continue;
	        }
	        if(count==1){
	            sum+=t[i]*d[i];
	        }
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
