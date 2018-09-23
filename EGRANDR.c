#include <stdio.h>

int main() {
	int test_case,i;
	long long int n;
	scanf("%d",&test_case);
	while(test_case--){
	    scanf("%lld",&n);
	    int count=0,sum=0,flag=0;
	    float x;
	    int a[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        sum+=a[i];
	        if(a[i]==5){
	            count=1;
	        }
	        if(a[i]==2){
	            flag=1;
	        }
	    }
	   x=(sum/n);
	   if(x>=4&&count==1&&flag==0){
	       printf("Yes\n");
	   }
	   else{
	       printf("No\n");
	   }
	}
	return 0;
}
