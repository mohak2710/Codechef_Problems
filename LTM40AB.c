#include <stdio.h>

int main() {
    int test_case;
    long long int a,b,c,d,i,j;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        long long int count=0;
        for(i=a;i<=b;i++){
           if(i<d){
               if(i<c){
                   count+=(d-c+1);
               }
               else{
                   count+=(d-i);
               }
           }
        }
        printf("%lld\n",count);
    }
	return 0;
}
