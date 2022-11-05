#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	repeat:
	printf("enter the no of rows you want.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(l=n-i;l>=1;l--)
		printf(" ");
		for(j=i;j>=1;j--)
		printf("%d",j);
		for(k=2;k<=i;k++)
		printf("%d",k);
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(l=n-i;l>=1;l--)
		printf(" ");
		for(j=i;j>=1;j--)
		printf("%d",j);
		for(k=2;k<=i;k++)
		printf("%d",k);
		printf("\n");

	}
	goto repeat;
}
