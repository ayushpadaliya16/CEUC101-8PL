/*aim:to get grade according marks
editor:ayush padaliya
last updated date:4/08/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int mark;
	clrscr();

	printf("enter your marks:");
	scanf("%d",&mark);

	(mark<=100&&mark>=0)?(mark>=90)?printf("A grade"):(mark<90&&mark>=80)?printf("B grade"):(mark<80&&mark>=70)?printf("C grade"):(mark<70&&mark>=60)?printf("D garde"):(mark<60)?printf("fail"):printf("invalid formate"):printf("invalid formate");

	getch();
}