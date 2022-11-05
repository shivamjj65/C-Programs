#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	repeat:
	printf("enter the no of rows you want.");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(l=1;l<=n-i;l++)
		printf(" ");
		for(j=i;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
}