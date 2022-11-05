//Grades using if-else//
#include<stdio.h>
int main()
{
	int n;
	printf("Enter your marks: ");
	scanf("%d",&n);
	if(n>=70&&n<=100)
	printf("Grade obtained is A");
	else if(n>=60&&n<=69)
	printf("Grade obtained is B");
	else if(n>=50&&n<=59)
	printf("Grade obtained is C");
	else if(n>=40&&n<=49)
	printf("Grade obtained is D");
	else
	printf("Fail");
	return 0;
}