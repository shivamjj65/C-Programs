/*Pattern  1
           21
		   321
		   4321
		   54321 */
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
	getch();
}
