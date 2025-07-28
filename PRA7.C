/*aim:to make automated system for ticket entry
editor:padaliya ayush
last updated date:25/07/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	clrscr();
	printf("enter your age:");
	scanf("%d",&age);
	age>12?printf("please pay 50 rupes"):printf("you have free entry");
	getch();

}