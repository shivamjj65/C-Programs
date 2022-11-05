//Roots of Quadratic equations //
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,D;
	printf("Enter the values of a,b,c representing ax*x+bx+c=0: ");
	scanf("%f %f %f",&a,&b,&c);
	D=(b*b-4*a*c);
	x1=(-b+sqrt(D))/2*a;
	x2=(-b-sqrt(D))/2*a;
	if(D>0)
	{
		printf("\n Roots of eauation are %f %f",x1,x2);
	}
	else if(D==0)
	{
		printf("\n Roots of equation is %f", x1);
	}
	else if(D<0)
	{
		printf("\n Roots are imaginary");
	}
	
	return 0;
}