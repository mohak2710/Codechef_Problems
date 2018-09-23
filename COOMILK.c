#include<stdio.h>
int main()
{
int n,i,t;
scanf("%d",&t);
while(t--){
char str[51][20];
int flag=0,j=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
   scanf("%s",str[i]);
}
for(i=n;i<(n+1);i++){
    str[i][0]='x';
}
for(i=0;i<n;i++)
{
    if(n==1){
        if(str[i][0]=='c'){
            printf("NO\n");
            flag=1;
        }
    }
   else{
   if(str[i][0]=='c'){
       if(str[i+1][0]=='m'){
           flag=0;
       }
       else{
           printf("NO\n");
           flag=1;
           break;
       }
   }}
}
if(flag==0){
    printf("YES\n");
}
}
return 0;
}
