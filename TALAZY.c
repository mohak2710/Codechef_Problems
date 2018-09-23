#include <stdio.h>

int main() {
	int test_case;
	long long int n,b,m;
	scanf("%d",&test_case);
	while(test_case--){
	    scanf("%lld%lld%lld",&n,&b,&m);
	    long long int time=0,x;
	    while(n>0){
	        if(n%2==0){
	            x=n/2;
	        }
	        else{
	            x=(n+1)/2;
	        }
	        time+=(x*m);
	        if(n>1){
	        time+=b;}
	        m=2*m;
	        n=n-x;
	    }
	 printf("%lld\n",time);
	}
	return 0;
}
