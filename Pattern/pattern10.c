/*Pattern *****
          ****
		  ***
		  **
		  *    */
#include<stdio.h>
void main()
{
	int i,j,n;
	char s='*';
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		printf("%c",s);
		printf("\n");
	}
	getch();
}
