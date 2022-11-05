//Number end with 7 or not// 
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n%10==7)
	{
		printf("Number end with 7");
	}
	else
	{
		printf("does not end with 7");
	}
	return 0;
}