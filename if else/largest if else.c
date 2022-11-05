//Largest among 2 using If elsse//
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any 2 numbers:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d is greater",a);
	}
	else
	{
		printf("%d is greater",b);
	}
	return 0;
}