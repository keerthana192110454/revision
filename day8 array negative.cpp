#include<stdio.h>
int main()
{
	int arr[100], i,n,nega=0,posi=0,ch,j=1;
	float a;
	while(j==1)
	{
	printf("1 for int ,2 for float;enter tthe choice:");
	scanf("%d",&ch);
	if(ch==1)
	{
	printf("enter the num of elements:");
	scanf("%d",&n);
	printf("enter the elements in the array:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	if(arr[i]<0)
	{
		nega++;
	}
	else
	{
		posi++;
    }
}
	printf("\n no of negatives:%d",nega);

}
else if(ch==2)
{
	printf("enter the value:");
	scanf("%f",&a);
	printf("invalid");
}
else
{
	printf("invalid");
}

printf("\nto cont press 1:");
scanf("%d",&j);
}
}
