#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d,e;
clrscr();
printf("enter value of a");
scanf("%d",&a);
printf("enter value of b");
scanf("%d",&b);
printf("enter value of c");
scanf("%d",&c);
printf("enter valur of d");
scanf("%d",&d);
printf("enter value of e");
scanf("%d",&e);


(a>b) ? (a>c) ? (a>d) ? (a>e) ? printf("a is maximum") : printf("e is maximum")
		      : (d>e) ? printf("d is maximum") : printf("e is maximum")
	      : (c>d) ? (c>e) ? printf("c is maximum") : printf("e is maximum")
		      :(d>e)  ? printf("d is maximum") : printf("e is maximum"):
	(b>c) ? (b>d) ? (b>e) ? printf("b is maximum") : printf("e is maximum")
		      : (d>e) ? printf("d is maximum") : printf("e is maximum")
	      : (c>d) ? (c>e) ? printf("c is maximum") : printf("e is maximum")
		      :(d>e)  ? printf("d is maximum") : printf("e is maximum");
getch();
}