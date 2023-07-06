#include<stdio.h>
#include<conio.h>
void main ()
{
   int n,fd,ld,sum=0;
   clrscr();
   printf("Enter the number=");
   scanf("%d",&n);
   ld=n%10;
   while(n>=10)
   {
      n=n/10;
      }
      fd=n;
      sum=fd+ld;
      printf("The sum of first and last digit =%d",sum);
      getch();
      }