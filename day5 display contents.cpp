#include<stdio.h>
#include<conio.h>
FILE *fp1,*fp2;
char c;
void main()
{
 clrscr();
 printf("enter the text\n");
 fp1 = fopen("abc.txt", "w");
 while((c = getchar()) != EOF)
  putc(c, fp1);
 fclose(fp1);
 fp1 = fopen("abc.txt","r");
 fp2=fopen("xyz.txt","w");
 while(!feof(fp1))
 {
  c = getc(fp1);
  putc(c,fp2);
 }
 fclose(fp1);
 fclose(fp2);
 printf("the copied data is \n");
 fp2 = fopen("xyz.txt", "r");
 while(!feof(fp2))
 {
  c = getc(fp2);
  printf("%c", c);
 }
 getch();
}
