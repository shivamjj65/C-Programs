#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no of rows you want.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%c",(char)64+j);
		printf("\n");
	}
	
}