#include <stdio.h>
int main()
{
   int first, second, *p, *q, sum,j=1;
   while(j==1)
   {
   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);
   
   printf("continue 1/0:");
   scanf("%d",&j);
  }


}

