#include<stdio.h>
int main()
{
	float e,f,g;
	printf("enter the number= ");
	scanf("%f",&e);
	if(e>=0)
	{
	f=e*e;
	g=e*e*e;
	printf("the square of number is= %f\n",f);
	printf("the triple of number is= %f\n",g);
}
else
{
	printf("invalid,enter positive integer");
}
}
