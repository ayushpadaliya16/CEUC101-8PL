/*aim:print book id 1 to 50 and every 5 book has special edition
editor:ayush padliya
last updated date:4/08/2025
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();

	for(n=1;n<=50;n++)
	{
		printf("\n Book ID:%d",n);
		if(n%5==0)
		{
			printf("(special edition)");
		}

	}
	getch();
}