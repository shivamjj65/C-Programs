/*Pattern 1
          22
		  333
		  4444
		  55555  */
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d \t",i);
		printf("\n");
	}
	getch();
}
