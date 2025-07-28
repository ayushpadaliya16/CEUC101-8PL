/*aim:to open account in bank
editor:ayush padaliya
last updated date:28/07/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	clrscr();
	printf("enetr your age:");
	scanf("%d",&age);
	(age>=18)?printf("you are eligible for opening account"):printf("you are not eligible for opening account");
	getch();
}