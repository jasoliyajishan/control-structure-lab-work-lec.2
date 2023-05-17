#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d;
clrscr();
printf("enter value of a");
scanf("%d",&a);
printf("enter value of b");
scanf("%d",&b);
printf("enter value of c");
scanf("%d",&c);
printf("enter valur of d");
scanf("%d",&d);
(a>b) ? (a>c) ? (a>d)? printf("a is maximum") : printf("d is maximum"):(c>d) ? printf("c is maximum"):printf("d is maximum"):
   (b>c) ? (b>d) ? printf("b is maximum") : printf("d is maximum")    :(c>d) ? printf("c is maximum"):printf("d is maximum");

getch();
}