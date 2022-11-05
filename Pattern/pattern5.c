/*Pattern  1
           2 3
		   4 5 6
		   7 8 9 10
		   11 12 13 14*/
#include<stdio.h>
void main()
{
	int i,j,n,v=1;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d \t",v++);
		printf("\n");
	}
	getch();
}
