#include <stdio.h>

int main() {
	int test_case;
	long long int m,n;
	scanf("%d",&test_case);
	while(test_case--){
	    scanf("%lld%lld",&m,&n);
	    if((m*n)%2==0){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}

	return 0;
}
