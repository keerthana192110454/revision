#include<stdio.h>
int main()
{
	int a,b,c,d,sum=0,i;
	float grade=0.0;
	printf("enter the  python marks= ");
	scanf("%d",& a);
	printf("enter the c programing number= ");
	scanf("%d",&b);
	printf("enter the maths marks= ");
	scanf("%d",& c);
	printf("enter the physics marks= ");
	scanf("%d",&d);
	sum=a+b+c+d;
	grade=sum/4;
	printf("the total marks= %d\n",sum);
	printf("the aggregate of the student = %f\n",grade);
	if(75< grade){
		printf("DISTINCTION");
	}	
	else if(60<=grade<=75){
		printf("FIRST DIVISON");
	}
	else if(50<=grade<60){
		printf("SECOUND DIVISION");
	}
	else if (50>grade){
		printf("FAIL");
	}
}
