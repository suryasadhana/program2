#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n;
printf("enter a no:");
scanf("%d",&n);
if(n&1)
{
printf("number is odd");
}
else
{
printf("number is even");
}
getch();
}
