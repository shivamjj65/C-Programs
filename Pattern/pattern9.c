/*Pattern 12345
          1234
		  123
		  12
		  1  */
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
		printf("\n");
	}
	getch();
}
