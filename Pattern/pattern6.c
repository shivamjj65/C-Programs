/*Pattern 1
          3 5
		  7 9 11
		  13 15 17 19  */
#include<stdio.h>
void main()
{
	int i,j,n,v=1;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d \t",v);
		v=v+2;
	}
		printf("\n");
	}
	getch();
}
