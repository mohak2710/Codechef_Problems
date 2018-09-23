#include<stdio.h>
#include<string.h>

int main() {
	int test_case,i;
	char x[100];
	scanf("%d",&test_case);
	while(test_case--){
	    scanf("%s",x);
	    int flag=0;
	    if(x[0]==x[1]){
	        flag=1;
	    }
	    else{
	        for(i=2;i<(strlen(x));i++){
	            if(i%2==0)
	            {if(x[i]!=x[0]){
	                flag=1;
	                break;
	            }}
	            else
	            {if(x[i]!=x[1]){
	                flag=1;
	                break;
	            }}
	        }

	    }
	    if(flag==0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
