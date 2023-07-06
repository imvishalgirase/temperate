#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
   clrscr();
   printf("plz enter which num table you want==");
   scanf("%d",&b);

   for(a=1;a<=10;a++)
   {
      printf("%d*%d=%d\n",b,a,b*a);
      }
      getch();
      }