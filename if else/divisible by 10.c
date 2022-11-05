//Divisible by 10 or not//
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n%10==0)
	{
		printf("\n Number is divisible by 10");
	}
	else
	{
		printf("\n Number is not divisible");
	}
	return 0;
}