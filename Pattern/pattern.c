#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		if(i<=5)
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
		else
		for(j=9;j>=i;j--)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
