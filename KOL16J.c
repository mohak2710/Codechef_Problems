#include <stdio.h>
int comp(const int *a,const int *b){
    int l=*(int*)a;int m=*(int*)b;
    return (l-m);
}
int main() {
	int test_case,n,i;
	scanf("%d",&test_case);
	while(test_case--){
	    scanf("%d",&n);
	    int x[n],count=0,flag=0;
	    for(i=0;i<n;i++){
	        scanf("%d",&x[i]);
	        if(x[i]==(i+1)){
	            count++;
	        }
	        if(x[i]>n){
	            flag=1;
	        }
	    }
	    qsort(&x[0],n,sizeof(x[0]),comp);
	    for(i=0;i<(n-1);i++){
	        if(x[i]==x[i+1]){
	            flag=1;
	            break;
	        }
	    }
	 if(flag==1||count==n){
	     printf("no\n");
	 }
	 else{
	     printf("yes\n");
	 }

	}
	return 0;
}
