#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no of rows you want.");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
	
}