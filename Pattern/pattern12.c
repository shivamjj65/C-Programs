/*Pattern 54321
          4321
		  321
		  21
		  1  */
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
	getch();
}
