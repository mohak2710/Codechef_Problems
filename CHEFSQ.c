#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n,j;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		int f;
		scanf("%d",&f);
		int b[f];
		for(i=0;i<f;i++)
		scanf("%d",&b[i]);
		int k=0;
		int x=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==b[k])
			{
				k++;
				x++;
			}
			if(x==f)
			break;
		}
		if(x==f)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
