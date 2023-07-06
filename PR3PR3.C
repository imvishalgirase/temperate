#include<stdio.h>
#include<conio.h>
void main()
{
   int n,count=0;
   clrscr();
   printf("plz enter th number:::");
   scanf("%d",&n);
   while(n>0)
   {
     n=n/10;
     count++;
     }
     printf("The nmber of digit=%d",count);
     getch();
     }