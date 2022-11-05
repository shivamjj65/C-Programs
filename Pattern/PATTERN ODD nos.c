#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("enter the no of rows you want.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d\t",k);
		k+=2;
		}
		
		printf("\n");
	}
	
}