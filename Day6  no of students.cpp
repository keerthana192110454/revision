#include<stdio.h>
int main()
{
	int total,stu,staff,ns,i=1;
	while(i==1)
	{
	printf("enter the total no of users:");
	scanf("%d",&total);
	if(total>0)
	{
	printf("enter the no of staff users:");
	scanf("%d",&staff);
	ns=staff/3;
	printf("the number of non staff:%d",ns);
	stu=total-staff-ns;
	printf("\nthe no of student users:%d",stu);
}
else
{
	printf("invalid");
}
printf("\ndo u wanna cnt? press 1:");
scanf("%d",&i);
}
return 0;
}
