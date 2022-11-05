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
		for(j=1;j<=i;j++)
		printf("%d",j);
		printf("\n");
		
	}
}