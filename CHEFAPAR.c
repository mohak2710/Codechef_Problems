#include <stdio.h>

int main() {
	int t,i,y,tmp;
    long int n;
	scanf("%d",&t);
	while(t--){
	    scanf("%ld",&n);
	    int x[n];
	    int count=0,total=0;
	    for(i=0;i<n;i++){
	        scanf("%d",&x[i]);
	        if(x[i]==0){
	            count++;
	        }
	    }
	    y=count*1000;
	    for(i=0;i<(n-1);i++){
	        if(x[i]==0&&x[i+1]==1){
	            tmp=x[i];
	            x[i]=x[i+1];
	            x[i+1]=tmp;
	            count++;
	        }
	    }
	    total=(y+(count*100));
	    printf("%d\n",total);
	}
	return 0;
}
