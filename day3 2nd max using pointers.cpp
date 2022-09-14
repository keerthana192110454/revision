#include <stdio.h>
#include <stdlib.h>
int main()
{
 int fno,sno,*ptr1=&fno,*ptr2=&sno,j=1;
   while(j==1)
   {
   printf("\n\n Pointer : Find the maximum number between two numbers :\n"); 
   printf("------------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2); 


 if(*ptr1>*ptr2)
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr1);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr2);
 }
 printf("continue? (1/0)");
 scanf("%d",&j);
}
 

}

